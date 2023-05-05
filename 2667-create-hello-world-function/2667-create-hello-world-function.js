/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        var str="Hello World";
            return str;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */