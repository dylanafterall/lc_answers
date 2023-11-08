use std::collections::HashMap;

// -----------------------------------------------------------------------------
pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut num_map: HashMap<i32, i32> = HashMap::new();

    for (i, &num) in nums.iter().enumerate() {
        if let Some(&diff) = num_map.get(&(target - num)) {
            return vec![diff, i as i32];
        } else {
            num_map.insert(num, i as i32);
        }
    }

    panic!("two_sum() failed to identify solution pair")
}

#[test]
pub fn two_sum_test() {
    assert_eq!(two_sum(vec![2, 7, 11, 15], 9), vec![0, 1]);
    assert_eq!(two_sum(vec![3, 2, 4], 6), vec![1, 2]);
    assert_eq!(two_sum(vec![3, 3], 6), vec![0, 1]);
}
