let a=10
console.log(`hey ${a}`)//$ use karte hai with `` agar string ke sath int ko print karna hai

// prompt se kuch bhhi input lete  hai to wo usko string mein convert kar deta hai 


// array:use hota hai ek se jyada bande ke details store karne ke liye
// object :ek se jyada properties ek hi bande ka hold karne ke liye use hota hai object
{
    name: "saurav",
    age: 12,
    class:10
}

// jab koi bhi variable banai aur usko koi value nahi di to usko value undefined mil jata hai

// NaN not a number--koi number ke sath aisa koi operation kiya jaye jo ho hi nahi sakta to nan aata hai
12 * "saurav"


// primitives and relative
// aisi koi bhi values jisme brackets aate hai eg arrays,objects,functions
// relative mein jab bhi hum copy karte hai to copy nahi hoti nyani naya nahi banta wo orignal ko hi reference karta hai
a = [1, 2, 3, 4]
b = a
b.pop()
// ye karne se  b=[1,2,3] and a=[1,2,3]