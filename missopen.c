int main() {
  if 1) { return 1; }
  return 0;
}

/*
$ clang missopen.c
missopen.c:2:6: error: expected '(' after 'if'
  if 1) { return 1; }
     ^
1 error generated.
*/
