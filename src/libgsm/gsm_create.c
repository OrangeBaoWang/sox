/*
 * Copyright 1992 by Jutta Degener and Carsten Bormann, Technische
 * Universitaet Berlin.  See the accompanying file "COPYRIGHT" for
 * details.  THERE IS ABSOLUTELY NO WARRANTY FOR THIS SOFTWARE.
 */

static char const	ident[] = "$Header: /cvsroot/sox/sox/src/libgsm/Attic/gsm_create.c,v 1.1 2006/08/27 23:04:56 cbagwell Exp $";

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "gsm.h"
#include "private.h"

gsm gsm_create ()
{
	gsm  r;

	r = (gsm)malloc(sizeof(struct gsm_state));
	if (!r) return r;

	memset((char *)r, 0, sizeof(*r));
	r->nrp = 40;

	return r;
}