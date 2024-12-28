
//1. 
function fun1(){
    return 2;
}

function fun2(){
    return 4;
}

let a = (fun1(), fun2());// first takes 2 as value then it takes 4
console.log("a: " ,a);//prints 4

//2.
const arr = ['one', 'two', 'three'];
const str = 'hello';

const res = arr.includes('on');
const anvar = arr.includes('onetwo');// false
const avar = str.includes('ll');

console.log("res: ", res);// false
console.log("anvar: ",anvar);// false
console.log("avar: ",avar);// true

//3.
console.log(true === ' ');
console.log('1' == 1)



