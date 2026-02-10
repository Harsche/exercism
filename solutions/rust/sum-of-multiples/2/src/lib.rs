use std::collections::HashSet;

pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    let mut sum = 0;
    let mut set: HashSet<u32> = HashSet::new();

    for base in factors.iter() {
        if *base == 0 {
            continue;
        }

        let mut multiplier = 1;
        loop {
            let num = base * multiplier;

            if num >= limit {
                break;
            }

            if !set.contains(&num) {
                set.insert(num);
                sum += num;
            }

            multiplier += 1;
        }
    }

    sum
}
