///////////////////////////////////////////////
//
// **************************
// ** ENGLISH - 07/07/2012 **
//
// Project/Software name: libObfuscate v2.00
// Author: "Eng. Cosimo Oliboni" <oliboni@embeddedsw.net>
// Company: EmbeddedSw.net, Italy
//
// THIS IS A FREE SOFTWARE
//
// This software is released under GNU LGPL:
//
// * LGPL 3.0 <http://www.gnu.org/licenses/lgpl.html>
//
// You�re free to copy, distribute and make commercial use
// of this software under the following conditions:
//
// * You have to cite the author (and copyright owner): Eng. Cosimo Oliboni
// * You have to provide a link to the author�s Homepage: <http://embeddedsw.net/>
//
///////////////////////////////////////////////

#ifndef TWOFISH_H
#define TWOFISH_H

// ** Thread-safe implementation

// ** Twofish cipher
// ** 128bit block size
// ** 256bit key

#include "Twofish_data.h"

extern	void Twofish_set_key(TWOFISH_DATA *pTfd,const DWORD *in_key, const DWORD key_len);
extern	void Twofish_encrypt(const TWOFISH_DATA *pTfd,const DWORD *in_blk, DWORD *out_blk);
extern	void Twofish_decrypt(const TWOFISH_DATA *pTfd,const DWORD *in_blk, DWORD *out_blk);

#endif
