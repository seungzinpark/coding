// 배열에 특화된 for (value of arr)
const arr = [1,2,3,4,5,6]
for (value of arr){
    console.log(value);
}

// 객체에 특화된 for (key in obj)
const arr = [1,2,3,4,5,6]
for (key in arr){
    console.log(key);
}
const person = {
    name: "SJ",
    age: 26
}
for (key in person){
    console.log(key);
}