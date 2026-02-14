pub fn is_armstrong_number(num: u32) -> bool {
    let num_as_string = num.to_string();
    let digits = num_as_string.chars().count();
    let mut sum: u32 = 0;

    for i in 0..digits{
        let digit_squared = num_as_string
            .chars()
            .nth(i)
            .unwrap()
            .to_digit(10)
            .unwrap()
            .pow(digits as u32);

        sum += digit_squared;
    }

    sum == num
}
