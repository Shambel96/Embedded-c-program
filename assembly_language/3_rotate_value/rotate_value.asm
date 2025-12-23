// rotate value
mov r0, #34h
mov r1, #56h
mov r2, #78h
mov r3, #26h
mov a, r0 // a=34h
xch a, r1 // r1=34h, a=56h
xch a, r2 // r2=56h, a=78h
xch a, r3 // r3=78h, a=26h
mov r0, a // r0=26h
end

// a is accumulator
// value r0 = 26h, r1=34h, r2=56h, r3=78h