#pragma once

#ifndef DJK33_HASH_H
#define DJK33_HASH_H

unsigned int djk33( std::string key )
{
    unsigned int hash = 0x5381;
    unsigned int keylen = key.length();

    for ( int lcv = 0; lcv < keylen; lcv++ )
    {
        hash = hash * 33 + (int) key[lcv];
    }
    return hash;
}

#endif