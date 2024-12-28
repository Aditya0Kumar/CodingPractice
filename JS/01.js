// let x = "aggg";
// let y = "ggga";

// console.log(x < y);


let car = {
    brand : "LAM",
    model : "X",
    year : 2020,
    arr : [25, 40, 30],
    o : {
        name : "ABC",
        sn : "XYZ"
    }
}

for(let i in car){
    console.log(`${i} : ${car[i]}`);
    console.log(`Hello`);
    console.log(car.arr[1]);
}

console.log(car.o.name);

