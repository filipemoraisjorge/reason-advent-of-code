let input = 325489;

let i_f = (n: int) : float => float_of_int(n);

let f_i = (r: float) : int => int_of_float(r);

let ceil_to_odd = (r: float) : int => {
  let n = ref(f_i(ceil(r)));
  if (n^ mod 2 === 0) {
    n := n^ + 1
  };
  n^
};

let ring = (n: int) : int => ceil_to_odd(sqrt(i_f(n)));

let range = (n: int) : int => ring(n) - 1;

let distance = (n: int) : int => n - f_i(i_f(ring(n) - 2) ** 2.0);

let wing = (n: int) : int => distance(n) / range(n);

let position = (n: int) : int => distance(n) mod range(n);

let coord_in_line = (n: int) : int => range(n) / 2 - position(n);

let coord_out_line = (n: int) : int => range(n) / 2;

type coords = {
  n: int,
  col: int,
  row: int
};

let coords = (n: int) : coords => {
  let col = ref(0);
  let row = ref(0);
  if (wing(n) mod 2 === 0) {
    col := coord_out_line(n);
    row := coord_in_line(n)
  } else {
    row := coord_out_line(n);
    col := coord_in_line(n)
  };
  {n, col: col^, row: row^}
};

let steps = (n) => {
  let c = coords(n);
  c.col + c.row
};

let day3_1 = (n: int) => steps(n);

Js.log(day3_1(26));

Js.log(day3_1(30));

Js.log(day3_1(31));

Js.log(day3_1(32));

Js.log(day3_1(37));

Js.log(day3_1(42));

Js.log(day3_1(43));

Js.log(day3_1(49));

Js.log(day3_1(input));