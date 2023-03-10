/******************************************************************************
 *
 *
 *
 * Copyright (C) 1997-2015 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby
 * granted. No representations are made about the suitability of this software
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef TRANSLATOR_TR_H
#define TRANSLATOR_TR_H

/*!
 When defining a translator class for the new language, follow
 the description in the documentation.  One of the steps says
 that you should copy the translator_en.h (this) file to your
 translator_xx.h new file.  Your new language should use the
 Translator class as the base class.  This means that you need to
 implement exactly the same (pure virtual) methods as the
 TranslatorEnglish does.  Because of this, it is a good idea to
 start with the copy of TranslatorEnglish and replace the strings
 one by one.

 It is not necessary to include "translator.h" or
 "translator_adapter.h" here.  The files are included in the
 language.cpp correctly.  Not including any of the mentioned
 files frees the maintainer from thinking about whether the
 first, the second, or both files should be included or not, and
 why.  This holds namely for localized translators because their
 base class is changed occasionally to adapter classes when the
 Translator class changes the interface, or back to the
 Translator class (by the local maintainer) when the localized
 translator is made up-to-date again.
*/
class TranslatorTurkish : public TranslatorAdapter_1_7_5
{
  public:

    // --- Language control methods -------------------

    /*! Used for identification of the language. The identification
     * should not be translated. It should be replaced by the name
     * of the language in English using lower-case characters only
     * (e.g. "czech", "japanese", "russian", etc.). It should be equal to
     * the identification used in language.cpp.
     */
    virtual QCString idLanguage()
    { return "turkish"; }

    /*! Used to get the LaTeX command(s) for the language support.
     *  This method should return string with commands that switch
     *  LaTeX to the desired language.  For example
     *  <pre>"\\usepackage[german]{babel}\n"
     *  </pre>
     *  or
     *  <pre>"\\usepackage{polski}\n"
     *  "\\usepackage[latin2]{inputenc}\n"
     *  "\\usepackage[T1]{fontenc}\n"
     *  </pre>
     *
     * The English LaTeX does not use such commands.  Because of this
     * the empty string is returned in this implementation.
     */
    virtual QCString latexLanguageSupportCommand()
    {
      return "\\usepackage[turkish]{babel}\n";
    }
    virtual QCString trISOLang()
    {
      return "tr";
    }
    virtual QCString getLanguageString()
    {
      return "0x41F Turkey";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related fonksiyonlar. */
    virtual QCString trRelatedFunctions()
    { return "??lgili Fonksiyonlar"; }

    /*! subscript for the related fonksiyonlar. */
    virtual QCString trRelatedSubscript()
    { return "(Not: Bu fonksiyonlar ??ye fonksiyon de??ildir.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "Ayr??nt??l?? tan??mlama"; }

    /*! header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "??ye Typedef Dok??mantasyonu"; }

    /*! header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "??ye En??merasyon Dok??mantasyonu"; }

    /*! header that is put before the list of member fonksiyonlar. */
    virtual QCString trMemberFunctionDocumentation()
    { return "??ye Fonksiyon Dok??mantasyonu"; }

    /*! header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Alan Dok??mantasyonu";
      }
      else
      {
        return "??ye Veri Dok??mantasyonu";
      }
    }

    /*! this is the text of a link put after brief descriptions. */
    virtual QCString trMore()
    { return "Ayr??nt??lar..."; }

    /*! put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "T??m ??yelerin listesi"; }

    /*! used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "??ye Listesi"; }

    /*! this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "??u s??n??f??n t??m ??yelerinin listesidir: "; }

    /*! this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return "  (kal??t??mla gelen ??yeleri de i??erir)."; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const QCString &s)
    { QCString result="Doxygen taraf??ndan";
      if (!s.isEmpty()) result+=s+" i??in ";
      result+=" kaynak koddan otomatik ??retilmi??tir.";
      return result;
    }

    /*! put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "enum ad??"; }

    /*! put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "enum de??eri"; }

    /*! put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "tan??mland?????? yer"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \\group command).
     */
    virtual QCString trModules()
    { return "Mod??ller"; }

    /*! This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "S??n??f Hiyerar??isi"; }

    /*! This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Yap??lar??";
      }
      else
      {
        return "S??n??f Listesi";
      }
    }

    /*! This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "Dosya Listesi"; }

    /*! This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Alanlar??";
      }
      else
      {
        return "S??n??f ??yeleri";
      }
    }

    /*! This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Globaller";
      }
      else
      {
        return "Dosya ??yeleri";
      }
    }

    /*! This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "??lgili Sayfalar"; }

    /*! This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "??rnekler"; }

    /*! This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "Ara"; }

    /*! This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    { return "Bu kal??t??m listesi tamamen olmasa da yakla????k "
             "olarak alfabetik s??raya konulmu??tur:";
    }

    /*! This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";
      result+="dosyalar?? k??sa a????klamalar??yla g??stermektedir:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    {

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "K??sa tan??mlar??yla birlikte veri yap??lar??:";
      }
      else
      {
        return "K??sa tan??mlar??yla s??n??flar, yap??lar (struct), "
               "birle??imler(union) ve aray??zler:";
      }
    }

    /*! This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll)
      {
        result+="dok??mante edilmi?? ";
      }
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="yap??(struct) ve birle??im(union) yap??lar??n?? i??erir";
      }
      else
      {
        result+="s??n??f ??yelerini i??erir";
      }
      result+=" ve ";
      if (!extractAll)
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="her alan?? yap??(struct)/birle??im(union) dok??mantasyonuna ba??lar:";
        }
        else
        {
          result+="her ??ye i??in s??n??f dok??mantasyonuna ba??lar:";
        }
      }
      else
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="ait oldu??u yap??(struct)/birle??ime(union) ba??lar:";
        }
        else
        {
          result+="ait oldu??u s??n??fa ba??lar:";
        }
      }
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="fonksiyonlar??, de??i??kenleri, makrolar??, en??merasyonlar?? ve typedef\'leri i??erir";
      }
      else
      {
        result+="dosya ??yelerini i??erir";
      }
      result+=" ve ";
      if (extractAll)
        result+="ait oldu??u dosyalar ba??lar:";
      else
        result+="dok??mantasyona ba??lar:";
      return result;
    }

    /*! This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "T??m ??rneklerin listesi a??a????dad??r:"; }

    /*! This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "??lgili t??m dok??mantasyon sayfalar??n??n listesi a??a????dad??r:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "T??m mod??llerin listesi a??a????dad??r:"; }

    // index titles (the project name is prepended for these)

    /*! This is used in HTML as the title of index.html. */
    virtual QCString trDocumentation()
    { return "Dok??mantasyonu"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "Mod??l ??ndeksi"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "Hiyerar??ik ??ndeksi"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Yap??lar?? ??ndeksi";
      }
      else
      {
        return "S??n??f ??ndeksi";
      }
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex()
    { return "Dosya ??ndeksi"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "Mod??l Dok??mantasyonu"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Yap??lar?? Dok??mantasyonu";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
          return trDesignUnitDocumentation();
      }
      else
      {
        return "S??n??f Dok??mantasyonu";
      }
    }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "Dosya Dok??mantasyonu"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "??rnek Dok??mantasyonu"; }

    /*! This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "Referans Kitab??"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    virtual QCString trDefines()
    { return "Makrolar"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "Typedef\'ler"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "En??merasyonlar"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "Fonksiyonlar"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "De??i??kenler"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "En??merat??r"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "Makro Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "Typedef Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "En??merasyon Tipi Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "Fonksiyon Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "De??i??ken Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Yap??lar??";
      }
      else
      {
        return "S??n??flar";
      }
    }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    virtual QCString trGeneratedAt(const QCString &date,const QCString &projName)
    {
      QCString result=projName+" i??in "+date;
      if (!projName.isEmpty()) result+=" tarihinde ";
      result+=" ??reten: ";
      return result;
    }

    /*! this text is put before a class diagram */
    virtual QCString trClassDiagram(const QCString &clName)
    {
      return clName+" i??in kal??t??m ??emas??:";
    }

    /*! this text is generated when the \\warning command is used. */
    virtual QCString trWarning()
    { return "Uyar??"; }

    /*! this text is generated when the \\version command is used. */
    virtual QCString trVersion()
    { return "S??r??m"; }

    /*! this text is generated when the \\date command is used. */
    virtual QCString trDate()
    { return "Tarih"; }

    /*! this text is generated when the \\return command is used. */
    virtual QCString trReturns()
    { return "D??nd??rd?????? de??er"; }

    /*! this text is generated when the \\sa command is used. */
    virtual QCString trSeeAlso()
    { return "Ayr??ca Bak??n??z"; }

    /*! this text is generated when the \\param command is used. */
    virtual QCString trParameters()
    { return "Parametreler"; }

    /*! this text is generated when the \\exception command is used. */
    virtual QCString trExceptions()
    { return "??stisnalar"; }

    /*! this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "Olu??turan"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Namespace Listesi"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="T??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";
      result+="namespace\'lerin k??sa tan??mlar??yla listesi a??a????dad??r:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Arkada??lar??"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Arkada?? Ve ??lgili Fonksiyon Dok??mantasyonu"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result=clName;
      switch(compType)
      {
        case ClassDef::Class:      result+=" S??n??f"; break;
        case ClassDef::Struct:     result+=" Yap??(Struct)"; break;
        case ClassDef::Union:      result+=" Birle??im(Union)"; break;
        case ClassDef::Interface:  result+=" Aray??z(Interface)"; break;
        case ClassDef::Protocol:   result+=" Protokol"; break;
        case ClassDef::Category:   result+=" Kategori"; break;
        case ClassDef::Exception:  result+=" ??stisna"; break;
        default: break;
      }
      if (isTemplate) result+=" ??ablon";
      result+=" Referans";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const QCString &fileName)
    {
      QCString result=fileName;
      result+=" Dosya Referans??";
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const QCString &namespaceName)
    {
      QCString result=namespaceName;
      result+=" Namespace Referans??";
      return result;
    }

    virtual QCString trPublicMembers()
    { return "Public ??ye Fonksiyonlar"; }
    virtual QCString trPublicSlots()
    { return "Public Slotlar"; }
    virtual QCString trSignals()
    { return "Sinyaller"; }
    virtual QCString trStaticPublicMembers()
    { return "Statik Public ??ye Fonksiyonlar"; }
    virtual QCString trProtectedMembers()
    { return "Korumal?? ??ye Fonksiyonlar"; }
    virtual QCString trProtectedSlots()
    { return "Korumal?? Slotlar"; }
    virtual QCString trStaticProtectedMembers()
    { return "Statik Korumal?? ??ye Fonksiyonlar"; }
    virtual QCString trPrivateMembers()
    { return "??zel ??ye Fonksiyonlar"; }
    virtual QCString trPrivateSlots()
    { return "??zel Slotlar"; }
    virtual QCString trStaticPrivateMembers()
    { return "Statik ??zel ??ye Fonksiyonlar"; }

    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    virtual QCString trWriteList(int numEntries)
    {
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++)
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list
                                   // (order is left to right)

        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry
            result+=", ";
          else                // the fore last entry
            result+=" ve ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "??u s??n??flardan t??remi??tir : "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "??u s??n??flar??n atas??d??r : "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "??u ??yeleri yeniden tan??mlar : "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "??u ??yeler taraf??ndan yeniden tan??mlanm????t??r : "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Namespace ??yeleri"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";
      result+="namespace ??yelerini listeler ve ";
      if (extractAll)
        result+="her ??ye i??in ??ye dok??mantasyonuna ba??lar:";
      else
        result+="ait oldu??u namespace\'lere ba??lar:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Namespace ??ndeksi"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Namespace Dok??mantasyonu"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Namespace\'ler"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result="Bu ";
      switch(compType)
      {
        case ClassDef::Class:      result+="s??n??f"; break;
        case ClassDef::Struct:     result+="yap??(struct)"; break;
        case ClassDef::Union:      result+="birle??im(union)"; break;
        case ClassDef::Interface:  result+="aray??z(interface)"; break;
        case ClassDef::Protocol:   result+="protokol"; break;
        case ClassDef::Category:   result+="kategori"; break;
        case ClassDef::Exception:  result+="istisna"; break;
        default: break;
      }
      result+=" i??in dok??mantasyon a??a????daki dosya";
      if (single) result+=""; else result+="lar";
      result+="dan ??retilmi??tir:";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "D??nd??rd?????? de??erler"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Ana Sayfa"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "sf."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "@1 dosyas??n??n @0 numaral?? sat??r??nda tan??mlanm????t??r.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "@0 dosyas??nda tan??mlanm????t??r.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Kullan??mdan kalkm????t??r";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const QCString &clName)
    {
      return clName+" i??in i??birli??i (collaboration) ??emas??:";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const QCString &fName)
    {
      return fName+" i??in i??erme ba????ml??l??k grafi??i:";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Constructor & Destructor Dok??mantasyonu";
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Bu dosyan??n kaynak koduna git.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Bu dosyan??n dok??mantasyonuna git.";
    }
    /*! Text for the \\pre command */
    virtual QCString trPrecondition()
    {
      return "??n ??art";
    }
    /*! Text for the \\post command */
    virtual QCString trPostcondition()
    {
      return "Son ??art (Postcondition)";
    }
    /*! Text for the \\invariant command */
    virtual QCString trInvariant()
    {
      return "De??i??mez(Invariant)";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "??lk de??er:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "kod";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Grafiksel S??n??f Hiyerar??isi";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Grafiksel s??n??f hiyerar??isine git";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Metinsel s??n??f hiyerar??isine git";
    }
    virtual QCString trPageIndex()
    {
      return "Sayfa ??ndeksi";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    virtual QCString trNote()
    {
      return "Not";
    }
    virtual QCString trPublicTypes()
    {
      return "Public Tipler";
    }
    virtual QCString trPublicAttribs()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Alanlar??";
      }
      else
      {
        return "Public ??zellikler(attribute)";
      }
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Statik Public ??zellikler(attribute)";
    }
    virtual QCString trProtectedTypes()
    {
      return "Korumal?? Tipler";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Korumal?? ??zellikler(attribute)";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Statik Korumal?? Attributes";
    }
    virtual QCString trPrivateTypes()
    {
      return "??zel Tipler";
    }
    virtual QCString trPrivateAttribs()
    {
      return "??zel ??zellikler(attribute)";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Statik ??zel ??zellikler(attribute)";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\todo item */
    virtual QCString trTodo()
    {
      return "Yap??lacak";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Yap??lacaklar Listesi";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Referans veren";
    }
    virtual QCString trRemarks()
    {
      return "Dipnotlar";
    }
    virtual QCString trAttention()
    {
      return "Dikkat";
    }
    virtual QCString trInclByDepGraph()
    {
      return "Bu ??ekil hangi dosyalar??n do??rudan ya da "
             "dolayl?? olarak bu dosyay?? i??erdi??ini g??sterir:";
    }
    virtual QCString trSince()
    {
      return "??u zamandan beri";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "??ekil Lejant??";
    }
    /*! page explaining how the dot graph's should be interpreted
     *  The %A in the text below are to prevent link to classes called "A".
     */
    virtual QCString trLegendDocs()
    {
      return
        "Bu dosya doxygen taraf??ndan ??retilen grafiklerin nas??l anla????laca????n?? "
        "a????klar.<p>\n"
        "A??a????daki ??rne??e bakal??m:\n"
        "\\code\n"
        "/*! Sadele??me y??z??nden g??r??nmeyen s??n??f */\n"
        "class Invisible { };\n\n"
        "/*! Sadele??mi?? s??n??f, kal??t??m ili??kisi gizli */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* Doxygen yorumlar??yla dok??mante edilmemi?? s??n??f */\n"
        "class Undocumented { };\n\n"
        "/*! Public kal??t??mla t??retilen s??n??f */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! Bir ??ablon s??n??f?? */\n"
        "template<class T> class Templ { };\n\n"
        "/*! Korumal?? kal??t??mla t??retilen s??n??f */\n"
        "class ProtectedBase { };\n\n"
        "/*! ??zel kal??t??mla t??retilen s??n??f */\n"
        "class PrivateBase { };\n\n"
        "/*! T??retilen s??n??f taraf??ndan kullan??lan s??n??f */\n"
        "class Used { };\n\n"
        "/*! Pek??ok s??n??ftan t??reyen bir s??n??f */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented,\n"
        "                  public Templ<int>\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "Bu kod a??a????daki ??emay?? olu??turur:"
        "<p><center><img alt=\"\" src=\"graph_legend."+getDotImageExtension()+"\"></center>\n"
        "<p>\n"
        "Yukar??daki ??emadaki kutular a??a????da a????klanm????t??r:\n"
        "<ul>\n"
        "<li>Dolu gri kutu ??eman??n ait oldu??u yap??(struct) ya da s??n??f?? "
        "g??sterir.\n"
        "<li>Siyah ??er??eveli bir kutu dok??mante edilmi?? bir yap??(struct) ya da s??n??f?? g??sterir.\n"
        "<li>Gri ??er??eveli bir kutu dok??mante edilmemi?? bir yap??(struct) ya da s??n??f?? g??sterir.\n"
        "<li>K??rm??z?? ??er??eveli bir kutu t??m kal??t??m/i??erme ili??kileri g??sterilmemi?? ve dok??mante "
        "edilmi?? bir yap??(struct) ya da s??n??f?? g??sterir. %A ??ema belirlenen s??n??rlara "
        "s????m??yorsa sadele??tirilir.\n"
        "</ul>\n"
        "Oklar??n anlam?? a??a????daki gibidir:\n"
        "<ul>\n"
        "<li>Koyu mavi ok iki s??n??f aras??ndaki public kal??t??m ili??kisini "
        "g??stermekte kullan??l??r.\n"
        "<li>Koyu ye??il ok korumal?? kal??t??m?? g??sterir.\n"
        "<li>Koyu k??rm??z?? ok ??zel kal??t??m?? g??sterir.\n"
        "<li>Mor kesikli ??izgi bir s??n??f??n di??eri taraf??ndan i??eriliyor ya da kullan??l??yor "
        "oldu??unu g??sterir. Ok i??aret edilen s??n??f??n hangi de??i??ken(ler) taraf??ndan eri??ildi??ini "
        "g??steren etiketle i??aretleni??tir.\n"
        "<li>Sar?? kesikli ??izgi ??ablondan ??retilen bir s??n??f ve ilgili ??ablon s??n??f?? "
        "aras??ndaki ili??kiyi g??sterir. Ok t??reyen s??n??f??n ??ablon parametreleriyle "
        "etiketlenmi??tir.\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "lejant";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "Test";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "Test Listesi";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "??zellikler";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "??zellik Dok??mantasyonu";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Veri Yap??lar??";
      }
      else
      {
        return "S??n??flar";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const QCString &name)
    {
      return "Paket "+name;
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Paketler ve k??sa tan??mlar?? (var ise):";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Paketler";
    }
    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "De??er:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "Hata";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Hata Listesi";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.6
//////////////////////////////////////////////////////////////////////////

    /*! Used as ansicpg for RTF file
     *
     * The following table shows the correlation of Charset name, Charset Value and
     * <pre>
     * Codepage number:
     * Charset Name       Charset Value(hex)  Codepage number
     * ------------------------------------------------------
     * DEFAULT_CHARSET           1 (x01)
     * SYMBOL_CHARSET            2 (x02)
     * OEM_CHARSET             255 (xFF)
     * ANSI_CHARSET              0 (x00)            1252
     * RUSSIAN_CHARSET         204 (xCC)            1251
     * EE_CHARSET              238 (xEE)            1250
     * GREEK_CHARSET           161 (xA1)            1253
     * TURKISH_CHARSET         162 (xA2)            1254
     * BALTIC_CHARSET          186 (xBA)            1257
     * HEBREW_CHARSET          177 (xB1)            1255
     * ARABIC _CHARSET         178 (xB2)            1256
     * SHIFTJIS_CHARSET        128 (x80)             932
     * HANGEUL_CHARSET         129 (x81)             949
     * GB2313_CHARSET          134 (x86)             936
     * CHINESEBIG5_CHARSET     136 (x88)             950
     * </pre>
     *
     */
    virtual QCString trRTFansicp()
    {
      return "1254";
    }


    /*! Used as ansicpg for RTF fcharset
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "162";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "??ndeks";
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trClass(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "S??n??f" : "s??n??f"));
      if (!singular)  result+="lar";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trFile(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Dosya" : "dosya"));
      if (!singular)  result+="lar";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trNamespace(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Namespace" : "namespace"));
      if (!singular)  result+="\'ler";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGroup(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Grup" : "grup"));
      if (!singular)  result+="lar";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trPage(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Sayfa" : "sayfa"));
      if (!singular)  result+="lar";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trMember(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "??ye" : "??ye"));
      if (!singular)  result+="ler";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Global de??i??ken" : "global de??i??ken"));
      if (!singular)  result+="ler";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*! This text is generated when the \\author command is used and
     *  for the author section in man pages. */
    virtual QCString trAuthor(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Yazar" : "yazar"));
      if (!singular)  result+="lar";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Referanslar";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////

    /*! used in member documentation blocks to produce a list of
     *  members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "??u ??yeleri ger??ekler: "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all members that implement this abstract member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "??u ??yelerce ger??eklenir: "+trWriteList(numEntries)+".";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.16
//////////////////////////////////////////////////////////////////////////

    /*! used in RTF documentation as a heading for the Table
     *  of Contents.
     */
    virtual QCString trRTFTableOfContents()
    {
      return "????indekiler";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.17
//////////////////////////////////////////////////////////////////////////

    /*! Used as the header of the list of item that have been
     *  flagged deprecated
     */
    virtual QCString trDeprecatedList()
    {
      return "Kullan??mdan Kalkanlar Listesl";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.18
//////////////////////////////////////////////////////////////////////////

    /*! Used as a header for declaration section of the events found in
     * a C# program
     */
    virtual QCString trEvents()
    {
      return "Olaylar";
    }
    /*! Header used for the documentation section of a class' events. */
    virtual QCString trEventDocumentation()
    {
      return "Olay Dok??mantasyonu";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a heading for a list of Java class types with package scope.
     */
    virtual QCString trPackageTypes()
    {
      return "Paket Tipleri";
    }
    /*! Used as a heading for a list of Java class fonksiyonlar with package
     * scope.
     */
    virtual QCString trPackageFunctions()
    {
      return "Paket Fonksiyonlar";
    }
    virtual QCString trPackageMembers()
    {
      return "Paket ??yeler";
    }
    /*! Used as a heading for a list of static Java class fonksiyonlar with
     *  package scope.
     */
    virtual QCString trStaticPackageFunctions()
    {
      return "Static Pakat Fonksiyonlar??";
    }
    /*! Used as a heading for a list of Java class variables with package
     * scope.
     */
    virtual QCString trPackageAttribs()
    {
      return "Packet ??zellikleri(attribute)";
    }
    /*! Used as a heading for a list of static Java class variables with
     * package scope.
     */
    virtual QCString trStaticPackageAttribs()
    {
      return "Statik Packet ??zellikleri(attribute)";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.1
//////////////////////////////////////////////////////////////////////////

    /*! Used in the quick index of a class/file/namespace member list page
     *  to link to the unfiltered list of all members.
     */
    virtual QCString trAll()
    {
      return "T??m??";
    }
    /*! Put in front of the call graph for a function. */
    virtual QCString trCallGraph()
    {
      return "Bu fonksiyon i??in ??a????r??lma ??emas??:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.3
//////////////////////////////////////////////////////////////////////////

    /*! This string is used as the title for the page listing the search
     *  results.
     */
    virtual QCString trSearchResultsTitle()
    {
      return "Arama sonu??lar??";
    }
    /*! This string is put just before listing the search results. The
     *  text can be different depending on the number of documents found.
     *  Inside the text you can put the special marker $num to insert
     *  the number representing the actual number of search results.
     *  The @a numDocuments parameter can be either 0, 1 or 2, where the
     *  value 2 represents 2 or more matches. HTML markup is allowed inside
     *  the returned string.
     */
    virtual QCString trSearchResults(int numDocuments)
    {
      if (numDocuments==0)
      {
        return "??zg??n??m, sorgunuzla e??le??en dok??man bulunamad??.";
      }
      else if (numDocuments==1)
      {
        return "Sorgunuzla e??le??en <b>1</b> dok??man bulundu.";
      }
      else
      {
        return "Sorgunuzla e??le??en <b>$num</b> dok??man bulundu. "
               "??nce en iyi e??le??meler g??steriliyor.";
      }
    }
    /*! This string is put before the list of matched words, for each search
     *  result. What follows is the list of words that matched the query.
     */
    virtual QCString trSearchMatches()
    {
      return "E??le??me:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.8
//////////////////////////////////////////////////////////////////////////

    /*! This is used in HTML as the title of page with source code for file filename
     */
    virtual QCString trSourceFile(QCString& filename)
    {
      return filename + " Kaynak Dosyas??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.9
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the name of the chapter containing the directory
     *  hierarchy.
     */
    virtual QCString trDirIndex()
    { return "Dizin Hiyerar??isi"; }

    /*! This is used as the name of the chapter containing the documentation
     *  of the directories.
     */
    virtual QCString trDirDocumentation()
    { return "Dizin Dok??mantasyonu"; }

    /*! This is used as the title of the directory index and also in the
     *  Quick links of an HTML page, to link to the directory hierarchy.
     */
    virtual QCString trDirectories()
    { return "Dizinler"; }

    /*! This returns the title of a directory page. The name of the
     *  directory is passed via \a dirName.
     */
    virtual QCString trDirReference(const QCString &dirName)
    { QCString result=dirName; result+=" Dizin Referans??"; return result; }

    /*! This returns the word directory with or without starting capital
     *  (\a first_capital) and in sigular or plural form (\a singular).
     */
    virtual QCString trDir(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Dizin" : "dizin"));
      if (!singular) result+="ler";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.1
//////////////////////////////////////////////////////////////////////////

    /*! This text is added to the documentation when the \\overload command
     *  is used for a overloaded function.
     */
    virtual QCString trOverloadText()
    {
       return "Bu ??ok anlaml?? (overloaded) bir ??ye fonksiyondur, "
              "tamaml??k a????s??ndan burada verilmektedir. Yukar??daki fonksiyondan "
              "sadece ald?????? arg??man(lar) a????s??ndan farkl??d??r.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.6
//////////////////////////////////////////////////////////////////////////

    /*! This is used to introduce a caller (or called-by) graph */
    virtual QCString trCallerGraph()
    {
      return "Bu fonksiyon i??in ??a????r??lma ??emas??:";
    }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "En??merasyon Dok??mantasyonu"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.5.4 (mainly for Fortran)
//////////////////////////////////////////////////////////////////////////

    /*! header that is put before the list of member subprograms (Fortran). */
    virtual QCString trMemberFunctionDocumentationFortran()
    { return "??ye Fonksiyon/Subroutine Dok??mantasyonu"; }

    /*! This is put above each page as a link to the list of annotated data types (Fortran). */
    virtual QCString trCompoundListFortran()
    { return "Veri Tipleri Listesi"; }

    /*! This is put above each page as a link to all members of compounds (Fortran). */
    virtual QCString trCompoundMembersFortran()
    { return "Veri Alanlar??"; }

    /*! This is an introduction to the annotated compound list (Fortran). */
    virtual QCString trCompoundListDescriptionFortran()
    { return "K??sa tan??mlar??yla veri tipleri:"; }

    /*! This is an introduction to the page with all data types (Fortran). */
    virtual QCString trCompoundMembersDescriptionFortran(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll)
      {
        result+="dok??mante edilmi?? ";
      }
      result+="veri tiplerini i??erir ve ";
      if (!extractAll)
      {
         result+="her ??yeyi veri yap??s?? dok??mantasyonuna ba??lar:";
      }
      else
      {
         result+="ait olduklar?? veri tiplerine ba??lar:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index (Fortran).
     */
    virtual QCString trCompoundIndexFortran()
    { return "Veri Tipi ??ndeksi"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all data types (Fortran).
     */
    virtual QCString trTypeDocumentation()
    { return "Veri Tipi Dok??mantasyonu"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) subprograms (Fortran).
     */
    virtual QCString trSubprograms()
    { return "Fonksiyonlar/Subroutine\'ler"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for subprograms (Fortran)
     */
    virtual QCString trSubprogramDocumentation()
    { return "Fonksiyon/Subroutine Dok??mantasyonu"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds (Fortran)
     */
     virtual QCString trDataTypes()
    { return "Veri Tipleri"; }

    /*! used as the title of page containing all the index of all modules (Fortran). */
    virtual QCString trModulesList()
    { return "Mod??ller Listesi"; }

    /*! used as an introduction to the modules list (Fortran) */
    virtual QCString trModulesListDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";
      result+="mod??lleri k??sa tan??mlar??ya i??erir:";
      return result;
    }

    /*! used as the title of the HTML page of a module/type (Fortran) */
    virtual QCString trCompoundReferenceFortran(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result=clName;
      switch(compType)
      {
        case ClassDef::Class:      result+=" Mod??l"; break;
        case ClassDef::Struct:     result+=" Tip"; break;
        case ClassDef::Union:      result+=" Birle??im(Union)"; break;
        case ClassDef::Interface:  result+=" Aray??z"; break;
        case ClassDef::Protocol:   result+=" Protokol"; break;
        case ClassDef::Category:   result+=" Kategori"; break;
        case ClassDef::Exception:  result+=" ??stisna"; break;
        default: break;
      }
      if (isTemplate) result+=" ??ablon";
      result+=" Referans";
      return result;
    }
    /*! used as the title of the HTML page of a module (Fortran) */
    virtual QCString trModuleReference(const QCString &namespaceName)
    {
      QCString result=namespaceName;
      result+=" Mod??l Referans??";
      return result;
    }

    /*! This is put above each page as a link to all members of modules. (Fortran) */
    virtual QCString trModulesMembers()
    { return "Mod??l ??yeleri"; }

    /*! This is an introduction to the page with all modules members (Fortran) */
    virtual QCString trModulesMemberDescription(bool extractAll)
    {
      QCString result="Bu liste t??m ";
      if (!extractAll) result+="dok??mante edilmi?? ";
      result+="mod??l ??yelerini i??erir ve ";
      if (extractAll)
      {
        result+="her ??yeyi mod??l dok??mantasyonuna ba??lar:";
      }
      else
      {
        result+="ait olduklar?? mod??llere ba??lar:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all modules (Fortran).
     */
    virtual QCString trModulesIndex()
    { return "Mod??ller Indeksi"; }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trModule(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Mod??l" : "mod??l"));
      if (!singular)  result+="ler";
      return result;
    }
    /*! This is put at the bottom of a module documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFilesFortran(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Module", " Struct" or " Union"
      // single is true implies a single file
      QCString result="Bu ";
      switch(compType)
      {
        case ClassDef::Class:      result+="mod??l"; break;
        case ClassDef::Struct:     result+="tip"; break;
        case ClassDef::Union:      result+="birle??im(union)"; break;
        case ClassDef::Interface:  result+="aray??z"; break;
        case ClassDef::Protocol:   result+="protokol"; break;
        case ClassDef::Category:   result+="kategori"; break;
        case ClassDef::Exception:  result+="istisna"; break;
        default: break;
      }
      result+=" i??in dok??mantasyon a??a????daki dosya";
      if (single) result+=":"; else result+="lar";
      result="dan ??retilmi??tir:";
      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trType(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Tip" : "tip"));
      if (!singular)  result+="ler";
      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trSubprogram(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Alt program" : "alt program"));
      if (!singular)  result+="lar";
      return result;
    }

    /*! C# Type Constraint list */
    virtual QCString trTypeConstraints()
    {
      return "Tip S??n??rlamalar??";
    }


  //////////////////////////////////////////////////////////////////////////
  // new since 1.6.0 (mainly for the new search engine)
  //////////////////////////////////////////////////////////////////////////

    /*! directory relation for \a name */
    virtual QCString trDirRelation(const QCString &name)
    {
    return QCString(name)+" ??li??kisi";
    }

    /*! Loading message shown when loading search results */
    virtual QCString trLoading()
    {
    return "Y??kl??yor...";
    }

    /*! Label used for search results in the global namespace */
    virtual QCString trGlobalNamespace()
    {
    return "En ??st Seviye";
    }

    /*! Message shown while searching */
    virtual QCString trSearching()
    {
    return "Ar??yor...";
    }

    /*! Text shown when no search results are found */
    virtual QCString trNoMatches()
    {
    return "E??le??me Yok";
    }

  //////////////////////////////////////////////////////////////////////////
  // new since 1.6.3 (missing items for the directory pages)
  //////////////////////////////////////////////////////////////////////////

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the first column mentions the
     *  source file that has a relation to another file.
     */
    virtual QCString trFileIn(const QCString &name)
    {
    return name+" dizinindeki dosya";
    }

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the second column mentions the
     *  destination file that is included.
     */
    virtual QCString trIncludesFileIn(const QCString &name)
    {
    return name + " dizinindeki dosyay?? kaps??yor";
    }

    /** Compiles a date string.
     *  @param year Year in 4 digits
     *  @param month Month of the year: 1=January
     *  @param day Day of the Month: 1..31
     *  @param dayOfWeek Day of the week: 1=Monday..7=Sunday
     *  @param hour Hour of the day: 0..23
     *  @param minutes Minutes in the hour: 0..59
     *  @param seconds Seconds within the minute: 0..59
     *  @param includeTime Include time in the result string?
     */
    virtual QCString trDateTime(int year,int month,int day,int dayOfWeek,
                                int hour,int minutes,int seconds,
                                bool includeTime)
    {
    static const char *days[]   = { "Pzt","Sal","??ar","Per","Cma","Cmt","Pzr" };
    static const char *months[] = { "Oca","??ub","Mar","Nis","May","Haz","Tem","A??u","Eyl","Ekm","Kas","Ara" };
    QCString sdate;
    sdate.sprintf("%s %s %d %d",days[dayOfWeek-1],months[month-1],day,year);
    if (includeTime)
    {
      QCString stime;
      stime.sprintf(" %.2d:%.2d:%.2d",hour,minutes,seconds);
      sdate+=stime;
    }
    return sdate;
    }

};

#endif
