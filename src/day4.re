let inputRaw = Day4Input.input;

let input4 = Js.String.split("\n", inputRaw);

let inputValid1 = [|"abcde fghij"|];

let inputInvalid2 = [|"abcde xyz ecdab"|];

let inputValid3 = [|"a ab abc abd abf abj"|];

let inputValid4 = [|"iiii oiii ooii oooi oooo"|];

let inputInvalid5 = [|"oiii ioii iioi iiio"|];

type anagram_map = JSMap.map(char, int);

module AnagramMap = Map.Make(Char);


let to_Map = (word: string) => {
  let anagram = ref(AnagramMap.empty);
  let kStart = 0;
  let kEnd = String.length(word) - 1;
  for (k in kStart to kEnd) {
    let c = word.[k];
    let currentCount =
      try (AnagramMap.find(c, anagram^)) {
      | Not_found => 0
      };
    let currentCount = currentCount + 1;
    anagram := AnagramMap.add(c, currentCount, anagram^)
  };
  anagram;
};

let isAnagram = (str1: string, str2: string) : bool => {
  let result = String.length(str1) === String.length(str2);
  let anag1 = to_Map(str1);
  let anag2 = to_Map(str2);
  
  AnagramMap.mem('c',anag1);
  let result = result && String.contains(str1, 'i');
  result
};


Js.log(isAnagram("iooo", "oooi"));

let am = AnagramMap.empty;

let am = AnagramMap.add('i', 1, am);

let am = AnagramMap.add('a', 3, am);

let am2 = AnagramMap.empty;

let am2 = AnagramMap.add('a', 3, am2);

let am2 = AnagramMap.add('i', 1, am2);

let xx = compare(am, am2);

module AnagramSet = Set.Make(Char);

let compareAnagramMap = ((ak, av), (bk, bv)) => {
  /* Js.log2(ak, bk);
   */ak - bk
};

/* Js.log2("MAP TEST", xx);
 */
let day4_2 = (array_lines) => {
  let iStart = 0;
  let iEnd = Js.Array.length(array_lines) - 1;
  for (i in iStart to iEnd) {
    let line = array_lines[i];
    if (Js.Array.length(array_lines) !== 0) {
      let words = Js.String.split(" ", line);
      let jStart = 0;
      let jEnd = Js.Array.length(words) - 1;
      for (j in jStart to jEnd) {
        {} /* end words */
      }
    } /* end lines */
  }
  /*         Js.log3(word, anagram, anagrams_map);
   */
};

let day4_1 = (array_lines) => {
  let iStart = 0;
  let iEnd = Js.Array.length(array_lines) - 1;
  let count = ref(0);
  for (i in iStart to iEnd) {
    let line = array_lines[i];
    if (Js.Array.length(array_lines) !== 0) {
      let words = Js.String.split(" ", line);
      let x = JSSet.create(words);
      if (Js.Array.length(words) === JSSet.size(x)) {
        count := count^ + 1
      }
    }
  };
  count^
};

/* Js.log(day4_2(inputInvalid5)); */