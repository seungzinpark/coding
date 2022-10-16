// numbers = [1, 4, 5, 9, 3, 7, 8, 2, 6 ,10];
// numbers.sort((x,y)=>x-y);
// console.log(numbers);
// numbers.reverse();
// console.log(numbers);


const numbers = [1, 2, 3, 4, 5]
function solution(numbers){
    const twice = numbers.map((value,index,arr)=> {
        return value*2        
        })
    return twice;
}
console.log(solution([1, 2, 3, 4, 5]))

