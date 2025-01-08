/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined(OGS_CORE_INSIDE) && !defined(OGS_CORE_COMPILATION)
#error "This header cannot be included directly."
#endif

#ifndef OGS_UDP_H
#define OGS_UDP_H

#ifdef __cplusplus
extern "C" {
#endif

ogs_sock_t *ogs_udp_socket(int family, ogs_socknode_t *node);
ogs_sock_t *ogs_udp_server(ogs_socknode_t *node);
ogs_sock_t *ogs_udp_client(ogs_socknode_t *node);
int ogs_udp_connect(ogs_sock_t *sock, ogs_sockaddr_t *sa_list);

#ifdef __cplusplus
}
#endif

#endif /* OGS_UDP_H */
