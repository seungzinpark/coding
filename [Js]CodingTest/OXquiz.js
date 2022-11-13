// 덧셈, 뺄셈 수식들이 'X [연산자] Y = Z' 형태로 들어있는
// 문자열 배열 quiz가 매개변수로 주어집니다.
// 수식이 옳다면 "O"를 틀리다면 "X"를 순서대로 담은 배열을
// return하도록 solution 함수를 완성해주세요.

function solution(quiz){
    const resultArr = []
    for(let i=0;i<quiz.length;i++){
        const newArr = quiz[i].split(' ')
        let result = newArr[1]=== '-' ? +newArr[0] - +newArr[2] : +newArr[0] + +newArr[2]
        // if(newArr[1]=== '-'){
        //     result = +newArr[0] - +newArr[2];
        //     // if(+newArr[4] === result){
        //     //     resultArr.push("O")
        //     // }else{
        //     //     resultArr.push("X")
        //     // }
        // } else{
        //     result = +newArr[0] + +newArr[2];
        //     // if(+newArr[4] === result){
        //     //     resultArr.push("O")
        //     // }else{
        //     //     resultArr.push("X")
        //     // }
        // }
        resultArr.push(+newArr[4] === result? "O" : "X")
    }
    return resultArr
}
console.log(solution(["3 - 4 = -3", "5 + 6 = 11"]));
// ["O","X"]