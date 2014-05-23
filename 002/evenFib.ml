

let rec evenFib n m acc = 
    if m < 4000000 then if m mod 2 = 0 then evenFib m (m+n) (m + acc) else evenFib m (m+n) acc
    else print_int acc
        in evenFib 1 2 0
