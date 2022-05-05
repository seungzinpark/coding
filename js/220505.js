let height = 180;

// if (height > 180) {
//     console.log("키가 크시네요")
// }
// if (height < 180) {
//     console.log("키가 작으시네요")
// }
if (height > 180) {
    console.log("키가 크시네요")
} else if (height < 180){
    console.log("키가 작으시네요")
} else {
    console.log("키가 똑같으시네요")
}

let winner;
let SJ = 100;
let NH = 30;
winner = SJ > NH ?  "SJ" : "NH";
console.log(winner);

let menu = 1;
switch(menu){
    case 1 : {
        console.log("아아를 시키셨습니다")
        break;
    }
    case 2 : {
        console.log("뜨아를 시키셨습니다")
        break;
    }
    case 3 : {
        console.log("라떼를 시키셨습니다")
        break;
    }
    case 4 : {
        console.log("모카를 시키셨습니다")
        break;
    }
    default : {
        console.log("메뉴판에 없는데요?")
        break;
    }
}

for(let i = 0; i < 30; i++){
    console.log(i+1);
}

let j = 1;
while(j<=30){
    console.log(j++);
}