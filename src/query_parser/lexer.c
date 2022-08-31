
/* #line 1 "lexer.rl" */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "parse.h"
#include "parser.h"
#include "../query_node.h"
#include "../stopwords.h"

/* forward declarations of stuff generated by lemon */

#define RSQuery_Parse RSQueryParser_
#define RSQuery_ParseAlloc RSQueryParser_Alloc
#define RSQuery_ParseFree RSQueryParser_Free

void RSQuery_Parse(void *yyp, int yymajor, QueryToken yyminor, QueryParse *ctx);
void *RSQuery_ParseAlloc(void *(*mallocProc)(size_t));
void RSQuery_ParseFree(void *p, void (*freeProc)(void *));


/* #line 232 "lexer.rl" */



/* #line 30 "lexer.c" */
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 10, 1, 
	11, 1, 12, 1, 13, 1, 14, 1, 
	15, 1, 16, 1, 17, 1, 18, 1, 
	19, 1, 20, 1, 21, 1, 22, 1, 
	23, 1, 24, 1, 25, 1, 26, 1, 
	27, 1, 28, 1, 29, 1, 30, 1, 
	31, 1, 32, 1, 33, 1, 34, 2, 
	2, 3, 2, 2, 4, 2, 2, 5, 
	2, 2, 6, 2, 2, 7, 2, 2, 
	8, 2, 2, 9
};

static const unsigned char _query_key_offsets[] = {
	0, 10, 20, 21, 22, 24, 27, 29, 
	39, 77, 88, 98, 99, 102, 108, 113, 
	116, 132, 146, 159, 160, 170, 180, 192
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96, 
	123, 126, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 110, 102, 48, 57, 
	45, 48, 57, 48, 57, 9, 13, 32, 
	47, 58, 64, 91, 96, 123, 126, 32, 
	34, 36, 37, 39, 40, 41, 42, 43, 
	45, 58, 59, 61, 64, 91, 92, 93, 
	95, 105, 123, 124, 125, 126, 127, 0, 
	8, 9, 13, 14, 31, 33, 47, 48, 
	57, 60, 63, 94, 96, 42, 92, 96, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	92, 96, 0, 47, 58, 64, 91, 94, 
	123, 127, 105, 105, 48, 57, 42, 46, 
	69, 101, 48, 57, 42, 69, 101, 48, 
	57, 42, 48, 57, 42, 46, 69, 92, 
	96, 101, 0, 47, 48, 57, 58, 64, 
	91, 94, 123, 127, 42, 45, 92, 96, 
	0, 47, 48, 57, 58, 64, 91, 94, 
	123, 127, 42, 92, 96, 0, 47, 48, 
	57, 58, 64, 91, 94, 123, 127, 62, 
	92, 96, 0, 47, 58, 64, 91, 94, 
	123, 127, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 42, 92, 96, 110, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	42, 92, 96, 102, 0, 47, 58, 64, 
	91, 94, 123, 127, 0
};

static const char _query_single_lengths[] = {
	0, 0, 1, 1, 0, 1, 0, 0, 
	24, 3, 2, 1, 1, 4, 3, 1, 
	6, 4, 3, 1, 2, 0, 4, 4
};

static const char _query_range_lengths[] = {
	5, 5, 0, 0, 1, 1, 1, 5, 
	7, 4, 4, 0, 1, 1, 1, 1, 
	5, 5, 5, 0, 4, 5, 4, 4
};

static const unsigned char _query_index_offsets[] = {
	0, 6, 12, 14, 16, 18, 21, 23, 
	29, 61, 69, 76, 78, 81, 87, 92, 
	95, 107, 117, 126, 128, 135, 141, 150
};

static const char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 2, 
	2, 2, 2, 0, 3, 0, 4, 0, 
	6, 5, 7, 8, 5, 8, 0, 9, 
	9, 9, 9, 9, 0, 11, 13, 14, 
	15, 16, 17, 18, 19, 16, 20, 22, 
	23, 24, 25, 26, 27, 28, 29, 30, 
	31, 32, 33, 34, 10, 10, 11, 10, 
	12, 21, 12, 12, 1, 35, 36, 0, 
	0, 0, 0, 0, 1, 37, 0, 0, 
	0, 0, 0, 2, 39, 38, 39, 41, 
	40, 35, 43, 44, 44, 41, 42, 35, 
	44, 44, 6, 42, 35, 8, 42, 35, 
	43, 45, 36, 42, 45, 42, 21, 42, 
	42, 42, 1, 35, 7, 36, 46, 46, 
	47, 46, 46, 46, 1, 35, 36, 42, 
	42, 47, 42, 42, 42, 1, 48, 38, 
	49, 0, 0, 0, 0, 0, 9, 1, 
	1, 1, 1, 1, 38, 35, 36, 46, 
	50, 46, 46, 46, 46, 1, 35, 36, 
	46, 51, 46, 46, 46, 46, 1, 0
};

static const char _query_trans_targs[] = {
	8, 9, 10, 3, 8, 8, 14, 6, 
	15, 20, 8, 8, 8, 8, 10, 8, 
	11, 8, 8, 8, 12, 16, 8, 8, 
	19, 20, 8, 21, 8, 9, 22, 8, 
	8, 8, 8, 8, 0, 1, 8, 2, 
	8, 13, 8, 4, 5, 17, 8, 18, 
	8, 7, 23, 9
};

static const char _query_trans_actions[] = {
	53, 73, 61, 0, 7, 51, 55, 0, 
	0, 58, 39, 35, 37, 9, 70, 29, 
	70, 13, 15, 27, 67, 55, 21, 23, 
	0, 70, 31, 0, 33, 70, 73, 17, 
	11, 19, 25, 41, 0, 0, 47, 0, 
	45, 55, 43, 0, 0, 73, 49, 55, 
	5, 0, 73, 64
};

static const char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	3, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const unsigned char _query_eof_trans[] = {
	1, 1, 1, 1, 6, 6, 1, 1, 
	0, 1, 1, 39, 41, 43, 43, 43, 
	43, 47, 43, 39, 1, 39, 47, 47
};

static const int query_start = 8;
static const int query_first_final = 8;
static const int query_error = -1;

static const int query_en_main = 8;


/* #line 235 "lexer.rl" */

QueryNode *QueryParse::ParseRaw() {
  parser = RSQuery_ParseAlloc(rm_malloc);

  int cs, act;
  const char* ts = raw;
  const char* te = raw + len;
  
/* #line 174 "lexer.c" */
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

/* #line 243 "lexer.rl" */
  QueryToken tok;

  const char* p = raw;
  const char* pe = raw + len;
  const char* eof = pe;

  
/* #line 190 "lexer.c" */
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
_resume:
	_acts = _query_actions + _query_from_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 1:
/* #line 1 "NONE" */
	{ts = p;}
	break;
/* #line 209 "lexer.c" */
		}
	}

	_keys = _query_trans_keys + _query_key_offsets[cs];
	_trans = _query_index_offsets[cs];

	_klen = _query_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _query_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _query_indicies[_trans];
_eof_trans:
	cs = _query_trans_targs[_trans];

	if ( _query_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _query_actions + _query_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 2:
/* #line 1 "NONE" */
	{te = p+1;}
	break;
	case 3:
/* #line 53 "lexer.rl" */
	{act = 1;}
	break;
	case 4:
/* #line 64 "lexer.rl" */
	{act = 2;}
	break;
	case 5:
/* #line 73 "lexer.rl" */
	{act = 3;}
	break;
	case 6:
/* #line 91 "lexer.rl" */
	{act = 5;}
	break;
	case 7:
/* #line 157 "lexer.rl" */
	{act = 14;}
	break;
	case 8:
/* #line 200 "lexer.rl" */
	{act = 21;}
	break;
	case 9:
/* #line 203 "lexer.rl" */
	{act = 23;}
	break;
	case 10:
/* #line 82 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    tok.len = te - ts;
    tok.s = ts+1;
    Parse(ARROW, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 11:
/* #line 91 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    Parse(NUMBER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 12:
/* #line 101 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(QUOTE, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 13:
/* #line 108 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(OR, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 14:
/* #line 115 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(LP, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 15:
/* #line 122 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(RP, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 16:
/* #line 129 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(LB, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 17:
/* #line 136 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(RB, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 18:
/* #line 143 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(COLON, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 19:
/* #line 150 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(SEMICOLON, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 20:
/* #line 164 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(TILDE, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 21:
/* #line 171 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(STAR, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 22:
/* #line 178 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(PERCENT, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 23:
/* #line 185 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(LSQB, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 24:
/* #line 192 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    Parse(RSQB, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
/* #line 199 "lexer.rl" */
	{te = p+1;}
	break;
	case 26:
/* #line 200 "lexer.rl" */
	{te = p+1;}
	break;
	case 27:
/* #line 201 "lexer.rl" */
	{te = p+1;}
	break;
	case 28:
/* #line 217 "lexer.rl" */
	{te = p+1;{
    tok.len = te-ts - 1;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;

    Parse(PREFIX, tok);

    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 29:
/* #line 53 "lexer.rl" */
	{te = p;p--;{
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    Parse(NUMBER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 30:
/* #line 157 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-raw;
    Parse(MINUS, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 31:
/* #line 200 "lexer.rl" */
	{te = p;p--;}
	break;
	case 32:
/* #line 203 "lexer.rl" */
	{te = p;p--;{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;
    if (!opts->stopwords->Contains(tok.s)) {
      Parse(TERM, tok);
    } else {
      Parse(STOPWORD, tok);
    }
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 33:
/* #line 53 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    Parse(NUMBER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 34:
/* #line 1 "NONE" */
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;}
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    Parse(NUMBER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 2:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    Parse(MODIFIER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 3:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    Parse(ATTRIBUTE, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 5:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    Parse(NUMBER, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 14:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    Parse(MINUS, tok);
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 23:
	{{p = ((te))-1;}
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;
    if (!opts->stopwords->Contains(tok.s)) {
      Parse(TERM, tok);
    } else {
      Parse(STOPWORD, tok);
    }
    if (!IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	default:
	{{p = ((te))-1;}}
	break;
	}
	}
	break;
/* #line 629 "lexer.c" */
		}
	}

_again:
	_acts = _query_actions + _query_to_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 0:
/* #line 1 "NONE" */
	{ts = 0;}
	break;
/* #line 642 "lexer.c" */
		}
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _query_eof_trans[cs] > 0 ) {
		_trans = _query_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	_out: {}
	}

/* #line 250 "lexer.rl" */

  if (IsOk()) {
    Parse(0, tok);
  }
  RSQuery_ParseFree(parser, rm_free);
  if (!IsOk() && root) {
    delete root;
    root = NULL;
  }
  return root;
}

void QueryParse::Parse(int yymajor, const QueryToken &yyminor) {
  RSQuery_Parse(parser, yymajor, yyminor, this);
}
