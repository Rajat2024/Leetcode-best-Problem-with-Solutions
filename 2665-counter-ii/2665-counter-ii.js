/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let count=init;
    let r=init;
    return  { 
         increment:()=>++count,
         decrement:()=>--count,
         reset: ()=>count=r
                }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */