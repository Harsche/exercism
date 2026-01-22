export function decodedValue(colors: string[]) {
  let result = 0;

  let startingIndex = Math.min(1, colors.length - 1);
  for (let i = startingIndex; i >= 0; i--) {
    const element = colors[i];
    let value = getBandValue(element);
    result += value * Math.pow(10, (startingIndex - i));
  }

  return result;
}

function getBandValue(color: string) {
  for (let i = 0; i < COLORS.length; i++) {
    if (COLORS[i] === color) { return i; }
  }

  throw new Error('Invalid color');
}

const COLORS = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white'];
