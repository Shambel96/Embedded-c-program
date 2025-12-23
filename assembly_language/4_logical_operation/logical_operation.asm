// logical operation between two 8 bit
mov a, #45h   //first number 0100 0101
mov r0, #67h //second number 0110 0111
anl a, r0   //and logic operation between a, r0 0100 0101
mov 20h, a //save AND result with 20h memory location
mov a, #45h 
orl a, r0   // OR logic operation       0110 0111
mov 21h, a // save OR result in RAM next memory location with 21h
mov a, #45h          
xrl a, r0 // XOR logic operation , same value 0 output 0010 0010 which is (22 hexadecimal)
// both input are same output is 0
mov 22h, a  
mov a,  #45h
cpl a // NOT logic   1011 1010 means (BA  in hexadeximal)
mov 23h, a
end
