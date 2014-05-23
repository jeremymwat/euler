(* Find the sum of all multiples of three or five below 1000 *)

let sum k n = (k * (((n-1)/k) * (((n-1)/k) + 1)) / 2) in
print_int ((sum 3 1000) + (sum 5 1000) - (sum 15 1000))
