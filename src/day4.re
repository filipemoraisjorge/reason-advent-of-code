let inputRaw = Day4Input.input;

let input = Js.String.split("\n", inputRaw);

let iStart = 0;
let iEnd = Js.Array.length(input) - 1;

let count = ref(0);

for (i in iStart to iEnd) {
  let line = input[i];
  if (Js.Array.length(input) !== 0) {
    let words = Js.String.split(" ", line);
    let x = JSSet.create(words);
    if (Js.Array.length(words) === JSSet.size(x)) {
      count := count^ + 1;
    }
  }
};

Js.log(count^);