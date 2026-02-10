pub fn reverse(input: &str) -> String {
    let chars = input.chars();

    let mut  output = String::new();

    for n in (0..chars.count()).rev() {
        let character = input.chars().nth(n).unwrap();
        output.push(character);
    }

    output
}
