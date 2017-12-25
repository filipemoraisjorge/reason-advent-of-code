/* https://github.com/reasonml-community/reason-react-hacker-news/blob/master/src/JSSet.re */
type set('a) =
  | JSSet('a);

[@bs.new] external empty : unit => set('a) = "Set";
[@bs.send] external add : (set('a), 'a) => set('a) = "add";
[@bs.send] external has : (set('a), 'a) => bool = "has";

[@bs.send] external remove : (set('a), 'a) => unit = "delete";

[@bs.get] external size : set('a) => int = "size"; 
let remove = (s, v) => {
  remove(s, v);
  s
};

let create = (values: array('a)) => {
  let empty_set = empty();
  Array.fold_left(add, empty_set, values)
};