/*    Copyright 2023 Davide Libenzi
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 */


#if !defined(_OBEX_MAIN_H)
#define _OBEX_MAIN_H

#include <stdint.h>
#include <openobex/obex.h>


#define EOBEX_OK 0
#define EOBEX_ABORT 1
#define EOBEX_HUP 2
#define EOBEX_PARSE 3


/*
 * This struct came from the affix/include/affix/obex.h file, it holds all the
 * information for a client connection like what operation is currently being
 * carried out and the openobex connection handle.
 */
typedef struct client_context {
	int serverdone;
	int clientdone;
	char *get_name;	/* Name of last get-request */
	int rsp;		/* error code */
	int opcode;
	char *arg;		/* response storage place */
	uint32_t con_id;		/* connection ide */
	void *private;
} client_context_t;



#endif

