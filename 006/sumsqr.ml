(* Project Euler problem 006 *)
open Core.Std

let rec buildlist n : int list =
   if n = 0 then [] else n::(buildlist (n-1));;

let sum_sq_diff x : unit = 
  print_int ( let sqsum = (List.fold_right ~f:(+) (buildlist x) ~init:0) in (sqsum * sqsum) - 
			    (List.fold_right ~f:(fun x n -> (x * x) + n) (buildlist x) ~init:0));;
