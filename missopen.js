if true) { }

/*
$ node missopen.js

/tmp/bb/missopen.js:1
if true) { }
   ^^^^

node.js:201
        throw e; // process.nextTick error, or 'error' event on first tick
              ^
SyntaxError: Unexpected token true
    at Module._compile (module.js:429:25)
    at Object..js (module.js:459:10)
    at Module.load (module.js:348:32)
    at Function._load (module.js:308:12)
    at Array.0 (module.js:479:10)
    at EventEmitter._tickCallback (node.js:192:41)
*/
