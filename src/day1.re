
let pow = (base, power) : float => base ** power;

let mod10n = (number: float, index: float) : float => mod_float(number /. 10. ** index, 10.);


Js.log(Js_math.floor( mod10n(9876., 0.) ));
/*
digit = (number, n) => Math.floor(number/Math.pow(10,n))%10;
 */