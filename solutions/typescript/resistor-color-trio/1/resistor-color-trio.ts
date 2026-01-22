export function decodedResistorValue(colors: string[]) {
  let result = 0;

  let startingIndex = Math.min(2, colors.length - 1);

  result += getBandValue(colors[0]) * 10;
  result += getBandValue(colors[1]);
  result *= Math.pow(10, getBandValue(colors[2]))

  let prefixIndex = 0;
  while(result >= 1000){
    result /= 1000;
    prefixIndex++;
  }
  let prefix = METRIC_PREFIXES[prefixIndex];

  return `${result} ${prefix}ohms`;
}

function getBandValue(color: string) {
  for (let i = 0; i < COLORS.length; i++) {
    if (COLORS[i] === color) { return i; }
  }

  throw new Error('Invalid color');
}

const COLORS = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white'];
const METRIC_PREFIXES = ['', 'kilo', 'mega', 'giga', 'tera'];