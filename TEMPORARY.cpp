import Foundation
import Glibc

var Number1 = 30
var Number2 = 59

print("Number 1 before swapping:", Number1)
print("Number 2 before swapping:", Number2)

Number1 = Number1 + Number2
Number2 = Number1 - Number2
Number1 = Number1 - Number2

print("\nNumber 1 after swapping:", Number1)
print("Number 2 after swapping:", Number2)
