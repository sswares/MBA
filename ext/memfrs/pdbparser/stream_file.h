#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
/// size = -1 (default value)
/// pages_size = 0x1000 (default value)
////////////////////////////////////////////////////////////////////////////////
int init_r_stream_file(R_STREAM_FILE *stream_file, FILE *fp, int *pages,
			int pages_amount, int size, int page_size);

