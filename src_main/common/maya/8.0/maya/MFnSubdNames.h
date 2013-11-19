
#ifndef _MFnSubdNames
#define _MFnSubdNames
//
//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc., and/or its licensors.  All 
// rights reserved.
// 
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its 
// licensors,  which is protected by U.S. and Canadian federal copyright law 
// and by international treaties.
// 
// The Data may not be disclosed or distributed to third parties or be 
// copied or duplicated, in whole or in part, without the prior written 
// consent of Autodesk.
// 
// The copyright notices in the Software and this entire statement, 
// including the above license grant, this restriction and the following 
// disclaimer, must be included in all copies of the Software, in whole 
// or in part, and all derivative works of the Software, unless such copies 
// or derivative works are solely in the form of machine-executable object 
// code generated by a source language processor.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND. 
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED 
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF 
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, 
// OR ARISING FROM A COURSE OF DEALING, USAGE, OR TRADE PRACTICE. IN NO 
// EVENT WILL AUTODESK AND/OR ITS LICENSORS BE LIABLE FOR ANY LOST 
// REVENUES, DATA, OR PROFITS, OR SPECIAL, DIRECT, INDIRECT, OR 
// CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK AND/OR ITS LICENSORS HAS 
// BEEN ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES. 
// ==========================================================================
//+
//
// CLASS:    MFnSubdNames
//
// *****************************************************************************
//
// CLASS DESCRIPTION (MFnSubdNames)
//
//	The names (ids) utilities for the hierarchical subdivision surfaces
//
// *****************************************************************************

#if defined __cplusplus

// *****************************************************************************

// INCLUDED HEADER FILES


#include <maya/MStatus.h>
#include <maya/MTypes.h>

// *****************************************************************************

// *****************************************************************************

// CLASS DECLARATION (MFnSubdNames)

/// Manipulate Subdivision Surface vertex, edge and face ids
/**

*/
#ifdef _WIN32
#pragma warning(disable: 4522)
#endif // _WIN32

class OPENMAYA_EXPORT MFnSubdNames
{
public:
	///
					MFnSubdNames();
	///
					~MFnSubdNames();
	///
	static int		base( MUint64 id );
	///
	static int		first( MUint64 id );
	///
	static int		level( MUint64 id );
	///
	static int		path( MUint64 id );
	///
	static int		corner( MUint64 id );

	///
	static MStatus	fromMUint64( MUint64 id, int& base, int& first,
								 int& level, int& path, int& corner );
	///
	static MStatus	toMUint64( MUint64& id, int base, int first,
								 int level, int path, int corner );

	///
	static MUint64	baseFaceId( MUint64 id );
	/// OBSOLETE
	static long		baseFaceIndex( MUint64 id );
	///
	static unsigned int	baseFaceIndexFromId( MUint64 id );
	///
	static MUint64	levelOneFaceId( MUint64 id );
	/// OBSOLETE
	static long		levelOneFaceAsLong( MUint64 id );
	///
	static unsigned int	levelOneFaceIndexFromId( MUint64 id );

	/// OBSOLETE
	static MUint64	levelOneFaceIdFromLong( long one );
	///
	static MUint64	levelOneFaceIdFromIndex( unsigned int index );

	/// OBSOLETE
	static MUint64	baseFaceIdFromLong( long base );
	///
	static MUint64	baseFaceIdFromIndex( unsigned int index );

	///
	static MUint64	parentFaceId( MUint64 id );

	///
	static MStatus	nonBaseFaceVertices( MUint64 id,
										 MUint64& vertex1, MUint64& vertex2,
										 MUint64& vertex3, MUint64& vertex4 );
	///
	static MStatus	nonBaseFaceEdges( MUint64 id,
									  MUint64& edge1, MUint64& edge2,
									  MUint64& edge3, MUint64& edge4);


	///
	static MStatus	fromSelectionIndices( MUint64& id,
										  unsigned int firstIndex,
										  unsigned int secondIndex );

	///
	static MStatus	toSelectionIndices( MUint64 id,
										unsigned int& firstIndex,
										unsigned int& secondIndex );

protected:
// No protected members

private:
	static const char* className();
};

#ifdef _WIN32
#pragma warning(default: 4522)
#endif // _WIN32

// *****************************************************************************
#endif /* __cplusplus */
#endif /* _MFnSubd */