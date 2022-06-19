const fruits1 = ['apple', 'banana', 'grape', 'peach'];
fruits1.splice(2,1,'watermelon');
console.log(fruits1);

const fruits2 = ['banana', 'apple', 'tomato', 'plum', 'grape', 'watermelon'];
const redFruits = fruits2.slice(1,4);
console.log(redFruits);