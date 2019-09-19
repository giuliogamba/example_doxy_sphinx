

/******************************************************************************
 *
 *  Authors: Giulio Gambardella <giuliog@xilinx.com>
 *  \file dma.h
 *
 *  Library of templated HLS functions for BNN deployment. 
 *  This file lists a set of functions to access memory mapped values into 
 *  streams. 
 *
 *****************************************************************************/
#ifndef DMA_HPP
#define DMA_HPP


#include <ap_int.h>
#include <hls_stream.h>

/*!
 * \brief DMA block accessing memory and output  streams
 *
 * 
 * \tparam DataWidth 	Width, in number of bits
 * \tparam numBytes 	Number of bytes to be read 
 *
 * \param in Input memory pointer
 * \param out Output HLS stream
 */
template<unsigned int DataWidth, unsigned int numBytes>
void FunctionExample(ap_uint<DataWidth> * in, hls::stream<ap_uint<DataWidth> > & out);


#endif
