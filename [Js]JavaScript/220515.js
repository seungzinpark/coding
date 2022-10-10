const fruits = ['apple', 'banana', 'lemon', 'watermelon', 'grape', 'orange'];
// index를 이용해 순회하는 가장 기본적인 for문
// for(let i=0; i<fruits.length; i++){
//     console.log(fruits[i]);
// }

// for of 를 이용해 순회 > 배열에 최적화
// for(value of fruits){
//     console.log(value);
// }

// for in 을 이용해 순회 > 
// 배열은 key - value 구조 > key - value 구조의 key를 뽑아줌
// 배열이니까 ! 그 key값에 index가 들어간 것 ! 
for(key in fruits){
    console.log(fruits[key]);
    console.log(key);
}