int main() {
  if (1 { return 1; }
  return 0;
}

/*
$ clang missclose.c
missclose.c:2:9: error: expected ')'
  if (1 { return 1; }
        ^
missclose.c:2:6: note: to match this '('
  if (1 { return 1; }
     ^
missclose.c:3:11: warning: if statement has empty body [-Wempty-body]
  return 0;
          ^
1 warning and 1 error generated.
*/
