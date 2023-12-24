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


#ifndef OBEX_SOCKET_H_INCLUDED
#define OBEX_SOCKET_H_INCLUDED

#include <openobex/obex.h>

struct cobex_context *cobex_open(int devid, const char * port, int timeout);
struct cobex_context *cobex_setsocket(const int fd);
int cobex_getsocket(struct cobex_context *gt);
void cobex_close(struct cobex_context *gt);
int cobex_listen(obex_t * handle, void *userdata);
int cobex_connect(obex_t * handle, void *userdata);
int cobex_disconnect(obex_t * handle, void *userdata);
int cobex_write(obex_t * handle, void *userdata, uint8_t * buffer, int length);
int cobex_handle_input(obex_t * handle, void *userdata, int timeout);

#endif				/* OBEX_SOCKET_H_INCLUDED */
