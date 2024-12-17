#ifndef ANALYZER_H
#define ANALYZER_H

int do_analyze(int argc, char *argv[]);
int is_keyword(char * buffer);
int is_operator(char ch);
int is_escape_sequences(char * buffer);

#endif
