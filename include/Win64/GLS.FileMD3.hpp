﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GLS.FileMD3.pas' rev: 35.00 (Windows)

#ifndef Gls_Filemd3HPP
#define Gls_Filemd3HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <GLS.VectorFileObjects.hpp>
#include <GLS.Material.hpp>
#include <GLS.ApplicationFileIO.hpp>
#include <GLS.VectorGeometry.hpp>
#include <Formats.MD3.hpp>
#include <GLS.Texture.hpp>
#include <GLS.BaseClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Gls
{
namespace Filemd3
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGLMD3VectorFile;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TGLMD3VectorFile : public Gls::Vectorfileobjects::TGLVectorFile
{
	typedef Gls::Vectorfileobjects::TGLVectorFile inherited;
	
public:
	__classmethod virtual Gls::Applicationfileio::TGLDataFileCapabilities __fastcall Capabilities();
	virtual void __fastcall LoadFromStream(System::Classes::TStream* aStream);
public:
	/* TGLVectorFile.Create */ inline __fastcall virtual TGLMD3VectorFile(System::Classes::TPersistent* AOwner) : Gls::Vectorfileobjects::TGLVectorFile(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGLMD3VectorFile() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filemd3 */
}	/* namespace Gls */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GLS_FILEMD3)
using namespace Gls::Filemd3;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GLS)
using namespace Gls;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Gls_Filemd3HPP