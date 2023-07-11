/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let newarray=[];
    arr.forEach((value,index)=>{
        let nval=fn(value,index);
        newarray.push(nval);
    })
    return newarray;
};