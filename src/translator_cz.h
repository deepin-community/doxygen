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

#ifndef TRANSLATOR_CZ_H
#define TRANSLATOR_CZ_H

// Updates:
// --------
// 2021/08/31 - Updated for 1.9.3 version by: <petyovsky@feec.vutbr.cz>.
// 2021/01/22 - Updated for 1.9.2 version by: <petyovsky@feec.vutbr.cz>.
// 2013/04/11 - Updates for "new since 1.8.4".
// 2012/07/31 - Updates for "new since 1.8.2".
// 2012/04/10 - Updates for "new since 1.8.0".
// 2011/07/28 - Updates for "new since 1.7.5".
// 2010/06/01 - typo
// 2010/04/28 - Updates for "new since 1.6.3".
// 2009/09/02 - Updates for "new since 1.6.0 (mainly for the new search engine)".
// 2008/06/09 - Corrections in trLegendDocs().
// 2007/11/13 - Update for "new since 1.5.4 (mainly for Fortran)".
// 2007/03/20 - removing decode(), conversion of literals to UTF-8.
// 2006/06/13 - translation of the trEnumerationValueDocumentation().
//              and clear in the Czech language.
//              modified trCallGraph() to make the meaning unambiguous
// 2006/05/10 - Update for "new since 1.4.6" -- trCallerGraph(),
// 2005/03/08 - Update for "new since 1.4.1" (trOverloadText())
// 2005/02/11 - The "never used" methods removed.
// 2004/09/14 - The new methods "since 1.3.9" implemented.
// 2004/06/16 - The new method "since 1.3.8" implemented.
// 2004/02/27 - Text inside the trCallGraph() corrected.
// 2004/02/26 - trLegendDocs() updated.
// 2003/08/13 - Four new methods "since 1.3.3" implemented.
// 2003/06/10 - Two new methods "since 1.3.1" implemented.
// 2003/04/28 - Five new methods "since 1.3" implemented.
// 2002/10/15 - The new trEvents() and trEventDocumentation() implemented.
// 2002/07/29 - The new trDeprecatedList() implemented.
// 2002/07/08 - The new trRTFTableOfContents() implemented. (my birthday! ;)
// 2002/03/05 - ... forgot to replace TranslatorAdapter... by Translator.
// 2002/01/23 - Two new methods "since 1.2.13" implemented.
// 2001/11/06 - trReferences() implemented.
// 2001/07/16 - trClassDocumentation() updated as in the English translator.
// 2001/05/25 - Corrections.
// 2001/05/18 - Updates, corrections.
// 2001/05/02 - Decode() inline changed to decode(); cleaning.
//              level as other translators.
//              class Translator.  The English translator is now on the same
//              introducing TranslatorAdapter class and the abstract base
// 2001/04/20 - Update for "new since 1.2.6-20010422". Experimental version
// 2001/04/10 - Updates (1.2.6-20010408), cleaning.
// 2001/03/12 - Minor correction of comments (synchronous with translator.h).
// 2001/02/26 - Update for "new since 1.2.5" version (trBug(), trBugList()).
// 2001/02/15 - trMore() now returns only "..." (ellipsis).
// 2001/01/09 - Update for "new since 1.2.4" version.
// 2000/10/17 - Update for "new since 1.2.2" version.
// 2000/09/11 - Update for "new since 1.2.1" version.
// 2000/09/06 - Reimplementation of trInheritsList().
// 2000/08/31 - ISOToWin() and WinToISO() moved to the base class.
// 2000/08/30 - Macro DECODE replaced by the inline (thanks to Boris Bralo).
// 2000/08/24 - Corrections, updates.
// 2000/08/02 - Updated for 1.2.0
// 2000/07/19 - Updates for "new since 1.1.5"; encoding conversion separated.
// 2000/07/10 - Update to 1.1.5; conditionally decoding to iso-8859-2 for UNIX.
// 2000/06/20 - Prototype: with diacritics; based on ver. 1.1.4 (from scratch).
//
// The first translation from English to Czech was started by
// Vlastimil Havran (1999--2000). The prototype version of Czech strings
// with diacritics was implemented by Petr Prikryl (prikrylp@skil.cz),
// 2000/06/20. Vlastimil agreed that Petr be the new maintainer.

// Todo
// ----
//  - The trReimplementedFromList() should pass the kind of the
//    reimplemented element.  It can be method, typedef or possibly
//    something else.  It is difficult to find the general translation
//    for all kinds in the Czech language.

class TranslatorCzech : public TranslatorAdapter_1_9_4
{
  public:
    // --- Language control methods -------------------

    virtual QCString idLanguage()
    { return "czech"; }

    virtual QCString latexLanguageSupportCommand()
    {
      return "\\usepackage[T2A]{fontenc}\n"
             "\\usepackage[czech]{babel}\n"
             "\\usepackage{regexpatch}\n"
             "\\makeatletter\n"
             "% Change the `-` delimiter to an active character\n"
             "\\xpatchparametertext\\@@@cmidrule{-}{\\cA-}{}{}\n"
             "\\xpatchparametertext\\@cline{-}{\\cA-}{}{}\n"
             "\\makeatother\n";
    }

    virtual QCString trISOLang()
    {
      return "cs";
    }
    virtual QCString getLanguageString()
    {
      return "0x405 Czech";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    virtual QCString trRelatedFunctions()
    { return "Souvisej??c?? funkce"; }

    /*! subscript for the related functions. */
    virtual QCString trRelatedSubscript()
    { return "(Uveden?? funkce nejsou ??lensk??mi funkcemi.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "Detailn?? popis"; }

    /*! header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "Dokumentace k ??lensk??m typ??m"; }

    /*! header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "Dokumentace k ??lensk??m v????t??m"; }

    /*! header that is put before the list of member functions. */
    virtual QCString trMemberFunctionDocumentation()
    { return "Dokumentace k metod??m"; }

    /*! header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Dokumentace k polo??k??m";
      }
      else
      {
        return "Dokumentace k datov??m ??len??m";
      }
    }

    /*! this is the text of a link put after brief descriptions. */
    virtual QCString trMore()
    { return "..."; }

    /*! put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "Seznam v??ech ??len??"; }

    /*! used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "Seznam ??len?? t????dy"; }

    /*! this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "Zde naleznete ??pln?? seznam ??len?? t????dy "; }

    /*! this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return ", v??etn?? v??ech zd??d??n??ch ??len??."; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const QCString &s)
    { QCString result("Vygenerov??no automaticky programem Doxygen "
                      "ze zdrojov??ch text??");
      if (!s.isEmpty()) result += QCString(" projektu ") + s;
      result += ".";
      return result;
    }

    /*! put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "jm??no v????tu"; }

    /*! put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "hodnota v????tu"; }

    /*! put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "definov??n v"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \\group command).
     */
    virtual QCString trModules()
    { return "Moduly"; }

    /*! This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "Hierarchie t????d"; }

    /*! This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Datov?? struktury";
      }
      else
      {
        return "Seznam t????d";
      }
    }

    /*! This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "Seznam soubor??"; }

    /*! This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Datov?? polo??ky";
      }
      else
      {
        return "Seznam ??len?? t????d";
      }
    }

    /*! This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Glob??ln?? symboly";
      }
      else
      {
        return "Symboly v souborech";
      }
    }

    /*! This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "Ostatn?? str??nky"; }

    /*! This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "P????klady"; }

    /*! This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "Hledat"; }

    /*! This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
        return "Zde je hierarchick?? seznam v??ech entit:";
      }
      else
      {
        return "Zde naleznete seznam, vyjad??uj??c?? vztah d??di??nosti t????d. "
               "Je se??azen p??ibli??n?? (ale ne ??pln??) podle abecedy:";
      }
    }

    /*! This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="soubor?? se stru??n??mi popisy:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    {

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "N??sleduj??c?? seznam obsahuje identifikace datov??ch "
                      "struktur a jejich stru??n?? popisy:";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_SLICE))
      {
        return "N??sleduj??c?? seznam obsahuje identifikace t????d. "
                      "V seznamu jsou uvedeny jejich stru??n?? popisy:";
      }
      else
      {
        return "N??sleduj??c?? seznam obsahuje p??edev????m identifikace "
                      "t????d, ale nach??zej?? se zde i dal???? netrivi??ln?? prvky, "
                      "jako jsou struktury (struct), unie (union) a rozhran?? "
                      "(interface). V seznamu jsou uvedeny jejich stru??n?? "
                      "popisy:";
      }
    }

    /*! This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result= "Zde naleznete seznam v??ech ";
      if (!extractAll)
      {
        result += "dokumentovan??ch ";
      }
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result += "polo??ek struktur (struct) a uni?? (union) ";
      }
      else
      {
        result += "??len?? t????d ";
      }
      result += "s odkazy na ";
      if (!extractAll)
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="struktury/unie, ke kter??m p????slu??ej??:";
        }
        else
        {
          result+="t????dy, ke kter??m p????slu??ej??:";
        }
      }
      else
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result += "dokumentaci struktur/uni??, ke kter??m p????slu??ej??:";
        }
        else
        {
          result += "dokumentaci t????d, ke kter??m p????slu??ej??:";
        }
      }
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="funkc??, prom??nn??ch, maker, v????t?? a definic typ?? (typedef) "
                "s odkazy na ";
      }
      else
      {
        result+="symbol??, kter?? jsou definov??ny na ??rovni sv??ch soubor??. "
                "Pro ka??d?? symbol je uveden odkaz na ";
      }

      if (extractAll)
        result+="soubory, ke kter??m p????slu??ej??:";
      else
        result+="dokumentaci:";
      return result;
    }

    /*! This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "Zde naleznete seznam v??ech p????klad??:"; }

    /*! This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "N??sleduj??c?? seznam odkazuje na dal???? str??nky projektu:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "Zde naleznete seznam v??ech modul??:"; }

    // index titles (the project name is prepended for these)

    /*! This is used in HTML as the title of index.html. */
    virtual QCString trDocumentation()
    { return "Dokumentace"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "Rejst????k modul??"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "Rejst????k hierarchie t????d"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Rejst????k datov??ch struktur";
      }
      else
      {
        return "Rejst????k t????d";
      }
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex()
    { return "Rejst????k soubor??"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "Dokumentace modul??"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Dokumentace datov??ch struktur";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
          return trDesignUnitDocumentation();
      }
      else
      {
        return "Dokumentace t????d";
      }
    }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "Dokumentace soubor??"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "Dokumentace p????klad??"; }

    /*! This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "Referen??n?? p????ru??ka"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    virtual QCString trDefines()
    { return "Definice maker"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "Definice typ??"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "V????ty"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "Funkce"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "Prom??nn??"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "Hodnoty v????tu"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "Dokumentace k definic??m maker"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "Dokumentace definic typ??"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "Dokumentace v????tov??ch typ??"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "Dokumentace funkc??"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "Dokumentace prom??nn??ch"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Datov?? struktury";
      }
      else
      {
        return "T????dy";
      }
    }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    virtual QCString trGeneratedAt(const QCString &date,const QCString &projName)
    {
      QCString result="Vygenerov??no dne: "+date;
      if (!projName.isEmpty()) result += QCString(", pro projekt: ") + projName;
      result+=", programem";
      return result;
    }

    /*! this text is put before a class diagram */
    virtual QCString trClassDiagram(const QCString &clName)
    {
      return QCString("Diagram d??di??nosti pro t????du ") + clName+":";
    }

    /*! this text is generated when the \\warning command is used. */
    virtual QCString trWarning()
    { return "Pozor"; }

    /*! this text is generated when the \\version command is used. */
    virtual QCString trVersion()
    { return "Verze"; }

    /*! this text is generated when the \\date command is used. */
    virtual QCString trDate()
    { return "Datum"; }

    /*! this text is generated when the \\return command is used. */
    virtual QCString trReturns()
    { return "N??vratov?? hodnota"; }

    /*! this text is generated when the \\sa command is used. */
    virtual QCString trSeeAlso()
    { return "Viz tak??"; }

    /*! this text is generated when the \\param command is used. */
    virtual QCString trParameters()
    { return "Parametry"; }

    /*! this text is generated when the \\exception command is used. */
    virtual QCString trExceptions()
    { return "V??jimky"; }

    /*! this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "Vygenerov??no programem"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Seznam jmenn??ch prostor??"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="jmenn??ch prostor?? se stru??n??m popisem:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "P????tel?? t????dy"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Dokumentace p????tel a souvisej??c??ch funkc?? t????dy"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result("Dokumentace ");
      if (isTemplate) result += "??ablony ";
      switch(compType)
      {
        case ClassDef::Class:      result += "t????dy "; break;
        case ClassDef::Struct:     result += "struktury "; break;
        case ClassDef::Union:      result += "unie "; break;
        case ClassDef::Interface:  result += "rozhran?? "; break;
        case ClassDef::Protocol:   result += "protokolu "; break;
        case ClassDef::Category:   result += "kategorie "; break;
        case ClassDef::Exception:  result += "v??jimky "; break;
        default: break;
      }
      result += clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const QCString &fileName)
    {
      QCString result("Dokumentace souboru ");
      result+=fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const QCString &namespaceName)
    {
      QCString result("Dokumentace jmenn??ho prostoru ");
      result+=namespaceName;
      return result;
    }

    /*
     *  these are for the member sections of a class, struct or union
     */
    virtual QCString trPublicMembers()
    { return "Ve??ejn?? metody"; }
    virtual QCString trPublicSlots()
    { return "Ve??ejn?? sloty"; }
    virtual QCString trSignals()
    { return "Sign??ly"; }
    virtual QCString trStaticPublicMembers()
    { return "Statick?? ve??ejn?? metody"; }
    virtual QCString trProtectedMembers()
    { return "Chr??n??n?? metody"; }
    virtual QCString trProtectedSlots()
    { return "Chr??n??n?? sloty"; }
    virtual QCString trStaticProtectedMembers()
    { return "Statick?? chr??n??n?? metody"; }
    virtual QCString trPrivateMembers()
    { return "Priv??tn?? metody"; }
    virtual QCString trPrivateSlots()
    { return "Priv??tn?? sloty"; }
    virtual QCString trStaticPrivateMembers()
    { return "Statick?? priv??tn?? metody"; }

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
            result+=" a ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      QCString result("D??d?? z ");
      result += (numEntries == 1) ? "b??zov?? t????dy " : "b??zov??ch t????d ";
      result += trWriteList(numEntries) + ".";
      return result;
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      QCString result("Zd??d??na ");
      result += (numEntries == 1) ? "t????dou " : "t????dami ";
      result += trWriteList(numEntries) + ".";
      return result;
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      QCString result("Reimplementuje stejnojmenn?? prvek z ");
      result += trWriteList(numEntries) + ".";
      return result;
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementov??no v "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Symboly ve jmenn??m prostoru"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="symbol??, kter?? jsou definov??ny ve sv??ch jmenn??ch prostorech. "
              "U ka??d??ho je uveden odkaz na ";
      if (extractAll)
        result+="dokumentaci p????slu??n??ho jmenn??ho prostoru:";
      else
        result+="p????slu??n?? jmenn?? prostor:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Rejst????k jmenn??ch prostor??"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Dokumentace jmenn??ch prostor??"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Jmenn?? prostory"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // single is true implies a single file
      QCString result="Dokumentace pro ";
      switch(compType)
      {
        case ClassDef::Class:      result+="tuto t????du"; break;
        case ClassDef::Struct:     result+="tuto strukturu"; break;
        case ClassDef::Union:      result+="tuto unii"; break;
        case ClassDef::Interface:  result+="toto rozhran??"; break;
        case ClassDef::Protocol:   result+="tento protokol"; break;
        case ClassDef::Category:   result+="tuto kategorii"; break;
        case ClassDef::Exception:  result+="tuto v??jimku"; break;
        default: break;
      }
      result+=" byla vygenerov??na z ";
      if (single) result+="n??sleduj??c??ho souboru:";
      else        result+="n??sleduj??c??ch soubor??:";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Vracen?? hodnoty"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Hlavn?? str??nka"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "s."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Definice je uvedena na ????dku @0 v souboru @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "Definice v souboru @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Zastaral??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const QCString &clName)
    {
      return "Diagram pro "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const QCString &fName)
    {
      return "Graf z??vislost?? na vkl??dan??ch souborech pro "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Dokumentace konstruktoru a destruktoru";
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Zobrazit zdrojov?? text tohoto souboru.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Zobrazit dokumentaci tohoto souboru.";
    }
    /*! Text for the \\pre command */
    virtual QCString trPrecondition()
    {
      return "Precondition";
    }
    /*! Text for the \\post command */
    virtual QCString trPostcondition()
    {
      return "Postcondition";
    }
    /*! Text for the \\invariant command */
    virtual QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Inicializa??n?? hodnota:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "zdrojov?? text";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Grafick?? zobrazen?? hierarchie t????d";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Zobrazit grafickou podobu hierarchie t????d";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Zobrazit textovou podobu hierarchie t????d";
    }
    virtual QCString trPageIndex()
    {
      return "Rejst????k str??nek";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    virtual QCString trNote()
    {
      return "Pozn??mka";
    }
    virtual QCString trPublicTypes()
    {
      return "Ve??ejn?? typy";
    }
    virtual QCString trPublicAttribs()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Datov?? polo??ky";
      }
      else
      {
        return "Ve??ejn?? atributy";
      }
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Statick?? ve??ejn?? atributy";
    }
    virtual QCString trProtectedTypes()
    {
      return "Chr??n??n?? typy";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Chr??n??n?? atributy";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Statick?? chr??n??n?? atributy";
    }
    virtual QCString trPrivateTypes()
    {
      return "Priv??tn?? typy";
    }
    virtual QCString trPrivateAttribs()
    {
      return "Priv??tn?? atributy";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Statick?? priv??tn?? atributy";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\todo item */
    virtual QCString trTodo()
    {
      return "Pl??novan?? ??pravy";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Seznam pl??novan??ch ??prav";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Pou????v?? se v";
    }
    virtual QCString trRemarks()
    {
      return "Pozn??mky"; // ??? not checked in a context
    }
    virtual QCString trAttention()
    {
      return "Upozorn??n??"; // ??? not checked in a context
    }
    virtual QCString trInclByDepGraph()
    {
      return "N??sleduj??c?? graf ukazuje, kter?? soubory p????mo nebo "
             "nep????mo vkl??daj?? tento soubor:";
    }
    virtual QCString trSince()
    {
      return "Od"; // ??? not checked in a context
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "Vysv??tlivky ke grafu";
    }
    /*! page explaining how the dot graph's should be interpreted */
    virtual QCString trLegendDocs()
    {
      return
        "Zde naleznete vysv??tlen??, jak maj?? b??t interpretov??ny grafy, "
        "kter?? byly vygenerov??ny programem doxygen.<p>\n"
        "Uva??ujte n??sleduj??c?? p????klad:\n"
        "\\code\n"
        "/*! Neviditeln?? t????da, kter?? se v grafu nezobrazuje, proto??e "
        "do??lo k o??ez??n?? grafu. */\n"
        "class Invisible { };\n\n"
        "/*! T????da, u kter?? do??lo k o??ez??n?? grafu. Vztah d??di??nosti "
        "je skryt. */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* T????da, kter?? nen?? dokumentov??na koment????i programu doxygen. */\n"
        "class Undocumented { };\n\n"
        "/*! B??zov?? t????da d??d??n?? ve??ejn?? (public inheritance). */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! ??ablona t????dy. */\n"
        "template<class T> class Templ { };\n\n"
        "/*! B??zov?? t????da, pou??it?? pro chr??n??n?? d??d??n?? "
        "(protected inheritance). */\n"
        "class ProtectedBase { };\n\n"
        "/*! B??zov?? t????da, vyu??it?? pro priv??tn?? d??d??n?? "
        "(private inheritance). */\n"
        "class PrivateBase { };\n\n"
        "/*! T????da, kter?? je vyu????v??na t????dou Inherited. */\n"
        "class Used { };\n\n"
        "/*! Odvozen?? t????da, kter?? d??d?? z v??ce t????d. */\n"
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
        "K v????e uveden??mu bude vygenerov??n n??sleduj??c?? graf:"
        "<p><center><img alt=\"\" src=\"graph_legend."+getDotImageExtension()+"\"></center></p>\n"
        "<p>\n"
        "Bloky (tj. uzly) v uveden??m grafu maj?? n??sleduj??c?? v??znam:\n"
        "</p>\n"
        "<ul>\n"
        "<li>??ed?? vypln??n?? obd??ln??k reprezentuje strukturu nebo t????du, "
            "pro kterou byl graf vygenerov??n.</li>\n"
        "<li>Obd??ln??k s ??ern??m obrysem ozna??uje dokumentovanou "
            "strukturu nebo t????du.</li>\n"
        "<li>Obd??ln??k s ??ed??m obrysem ozna??uje nedokumentovanou "
            "strukturu nebo t????du.</li>\n"
        "<li>Obd??ln??k s ??erven??m obrysem ozna??uje dokumentovanou "
            "strukturu nebo t????du, pro kterou\n"
            "nejsou zobrazeny v??echny vztahy d??di??nosti nebo obsa??en??. "
            "Graf je o??ez??n v p????pad??, kdy jej\n"
            "nen?? mo??n?? um??stit do vymezen??ho prostoru.</li>\n"
        "</ul>\n"
        "<p>\n"
        "??ipky (tj. hrany grafu) maj?? n??sleduj??c?? v??znam:\n"
        "</p>\n"
        "<ul>\n"
        "<li>Tmav?? modr?? ??ipka se pou????v?? pro ozna??en?? vztahu ve??ejn?? "
            "d??di??nosti (public) mezi dv??ma t????dami.</li>\n"
        "<li>Tmav?? zelen?? ??ipka ozna??uje vztah chr??n??n?? d??di??nosti "
            "(protected).</li>\n"
        "<li>Tmav?? ??erven?? ??ipka ozna??uje vztah priv??tn?? d??di??nosti "
            "(private).</li>\n"
        "<li>Purpurov?? ??ipka kreslen?? ????rkovan?? se pou????v?? v p????pad??, "
            "kdy je t????da obsa??ena v jin?? t????d??,\n"
            "nebo kdy je pou????v??na jinou t????dou. Je ozna??ena identifik??torem "
            "jedn?? nebo v??ce prom??n??ch, p??es kter??\n"
            "je t????da nebo struktura zp????stupn??na.</li>\n"
        "<li>??lut?? ??ipka kreslen?? ????rkovan?? vyjad??uje vztah mezi instanc?? ??ablony "
            "a ??ablonou t????dy, na z??klad?? kter?? byla\n"
            "instance ??ablony vytvo??ena. V popisu ??ipky jsou uvedeny  p????slu??n??"
            " parametry ??ablony.</li>\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "vysv??tlivky";
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
      return "Seznam test??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "Vlastnosti";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "Dokumentace k vlastnosti";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Datov?? struktury";
      }
      else
      {
        return "T????dy";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const QCString &name)
    {
      return QCString("Bal??k ") + name;
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Zde naleznete seznam bal??k?? se stru??n??m popisem "
                    "(pokud byl uveden):";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Bal??ky";
    }
    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "Hodnota:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "Chyba";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Seznam chyb";
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
      return "1250";
    }


    /*! Used as ansicpg for RTF fcharset
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "238";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "Rejst????k";
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trClass(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "T????d" : "t????d"));
      result += singular ? "a" : "y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trFile(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Soubor" : "soubor"));
      if (!singular)  result+="y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trNamespace(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Jmenn" : "jmenn"));
      result += singular ? "??" : "??";
      result+=" prostor";
      if (!singular)  result+="y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGroup(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Skupin" : "skupin"));
      result += singular ? "a" : "y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trPage(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Str??nk" : "str??nk"));
      result += singular ? "a" : "y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trMember(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "??len" : "??len"));
      if (!singular)  result += "y";
      return result;
    }

    /*! ??? Jak to prelozit? Bylo by dobre, kdyby se ozval nekdo,
     * kdo to pouziva.
     */
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Global" : "global"));
      if (!singular)  result+="s";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*! This text is generated when the \\author command is used and
     *  for the author section in man pages. */
    virtual QCString trAuthor(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Auto" : "auto"));
      result += (singular) ? "r" : "??i";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Odkazuje se na";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////

    /*! used in member documentation blocks to produce a list of
     *  members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "Implementuje "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all members that implement this member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "Implementov??no v "+trWriteList(numEntries)+".";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.16
//////////////////////////////////////////////////////////////////////////

    /*! used in RTF documentation as a heading for the Table
     *  of Contents.
     */
    virtual QCString trRTFTableOfContents()
    {
      return "Obsah";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.17
//////////////////////////////////////////////////////////////////////////

    /*! Used as the header of the list of item that have been
     *  flagged deprecated
     */
    virtual QCString trDeprecatedList()
    {
      return "Seznam zastaral??ch prvk??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.18
//////////////////////////////////////////////////////////////////////////

    /*! Used as a header for declaration section of the events found in
     * a C# program
     */
    virtual QCString trEvents()
    {
      return "Ud??losti";
    }
    /*! Header used for the documentation section of a class' events. */
    virtual QCString trEventDocumentation()
    {
      return "Dokumentace ud??lost??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a heading for a list of Java class types with package scope.
     */
    virtual QCString trPackageTypes()
    {
      return "Typy v bal??ku";
    }
    /*! Used as a heading for a list of Java class functions with package
     * scope.
     */
    virtual QCString trPackageFunctions()
    {
      return "Funkce v bal??ku";
    }
    virtual QCString trPackageMembers()
    {
      return "??leny v bal??ku";
    }
    /*! Used as a heading for a list of static Java class functions with
     *  package scope.
     */
    virtual QCString trStaticPackageFunctions()
    {
      return "Statick?? funkce v bal??ku";
    }
    /*! Used as a heading for a list of Java class variables with package
     * scope.
     */
    virtual QCString trPackageAttribs()
    {
      return "Atributy bal??ku";
    }
    /*! Used as a heading for a list of static Java class variables with
     * package scope.
     */
    virtual QCString trStaticPackageAttribs()
    {
      return "Statick?? atributy bal??ku";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.1
//////////////////////////////////////////////////////////////////////////

    /*! Used in the quick index of a class/file/namespace member list page
     *  to link to the unfiltered list of all members.
     */
    virtual QCString trAll()
    {
      return "V??e";
    }
    /*! Put in front of the call graph for a function. */
    virtual QCString trCallGraph()
    {
      return "Tato funkce vol??...";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.3
//////////////////////////////////////////////////////////////////////////

    /*! This string is used as the title for the page listing the search
     *  results.
     */
    virtual QCString trSearchResultsTitle()
    {
      return "V??sledky vyhled??v??n??";
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
        return "Lituji. Va??emu dotazu neodpov??d?? ????dn?? dokument.";
      }
      else if (numDocuments==1)
      {
        return "Nalezen jeden dokument, kter?? vyhovuje va??emu dotazu.";
      }
      else
      {
        return "Nalezeno <b>$num</b> dokument??, kter?? vyhovuj?? va??emu "
                      "dotazu. Nejl??pe odpov??daj??c?? dokumenty jsou zobrazeny "
                      "jako prvn??.";
      }
    }
    /*! This string is put before the list of matched words, for each search
     *  result. What follows is the list of words that matched the query.
     */
    virtual QCString trSearchMatches()
    {
      return "Nalezen?? slova:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.8
//////////////////////////////////////////////////////////////////////////

    /*! This is used in HTML as the title of page with source code for file filename
     */
    virtual QCString trSourceFile(QCString& filename)
    {
      return QCString("Zdrojov?? soubor ") + filename;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.9
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the name of the chapter containing the directory
     *  hierarchy.
     */
    virtual QCString trDirIndex()
    { return "Hierarchie adres??????"; }

    /*! This is used as the name of the chapter containing the documentation
     *  of the directories.
     */
    virtual QCString trDirDocumentation()
    { return "Dokumentace k adres??????m"; }

    /*! This is used as the title of the directory index and also in the
     *  Quick links of an HTML page, to link to the directory hierarchy.
     */
    virtual QCString trDirectories()
    { return "Adres????e"; }

    /*! This returns the title of a directory page. The name of the
     *  directory is passed via \a dirName.
     */
    virtual QCString trDirReference(const QCString &dirName)
    {
        QCString result = "Reference k adres????i ";
        result += dirName;
        return result;
    }

    /*! This returns the word directory with or without starting capital
     *  (\a first_capital) and in singular or plural form (\a singular).
     */
    virtual QCString trDir(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Adres????" : "adres????"));
      if (!singular)
        result += "e";
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
       return "Jde o p??et????enou (overloaded) metodu, "
              "kter?? m?? usnadnit pou????v??n??. Od v????e uveden?? metody se li???? "
              "pouze jinak zad??van??mi argumenty.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.6
//////////////////////////////////////////////////////////////////////////

    /*! This is used to introduce a caller (or called-by) graph */
    virtual QCString trCallerGraph()
    {
      return "Tuto funkci volaj??...";
    }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Dokumentace v????tov??ch hodnot"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.5.4 (mainly for Fortran)
//////////////////////////////////////////////////////////////////////////

    /*! header that is put before the list of member subprograms (Fortran). */
    virtual QCString trMemberFunctionDocumentationFortran()
    { return "Dokumentace ??lensk??ch funkc??/podprogram??"; }

    /*! This is put above each page as a link to the list of annotated data types (Fortran). */
    virtual QCString trCompoundListFortran()
    { return "Seznam datov??ch typ??"; }

    /*! This is put above each page as a link to all members of compounds (Fortran). */
    virtual QCString trCompoundMembersFortran()
    { return "Datov?? pole"; }

    /*! This is an introduction to the annotated compound list (Fortran). */
    virtual QCString trCompoundListDescriptionFortran()
    { return "Datov?? typy se stru??n??mi popisy:"; }

    /*! This is an introduction to the page with all data types (Fortran). */
    virtual QCString trCompoundMembersDescriptionFortran(bool extractAll)
    {
      QCString result="N??sleduje seznam v??ech ";
      if (!extractAll)
      {
        result+="dokumentovan??ch ";
      }
      result+="slo??ek datov??ch typ??";
      result+=" s odkazy na ";
      if (!extractAll)
      {
         result+="dokumentaci datov?? struktury pro ka??dou slo??ku:";
      }
      else
      {
          result+="p????slu??n?? datov?? typy:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index (Fortran).
     */
    virtual QCString trCompoundIndexFortran()
    { return "Rejst????k datov??ch typ??"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all data types (Fortran).
     */
    virtual QCString trTypeDocumentation()
    { return "Dokumentace k datov??m typ??m"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) subprograms (Fortran).
     */
    virtual QCString trSubprograms()
    { return "Funkce/podprogramy"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for subprograms (Fortran)
     */
    virtual QCString trSubprogramDocumentation()
    { return "Dokumentace funkce/podprogramu"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds (Fortran)
     */
     virtual QCString trDataTypes()
    { return "Datov?? typy"; }

    /*! used as the title of page containing all the index of all modules (Fortran). */
    virtual QCString trModulesList()
    { return "Seznam modul??"; }

    /*! used as an introduction to the modules list (Fortran) */
    virtual QCString trModulesListDescription(bool extractAll)
    {
      QCString result="N??sleduje seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="modul?? se stru??n??mi popisy:";
      return result;
    }

    /*! used as the title of the HTML page of a module/type (Fortran) */
    virtual QCString trCompoundReferenceFortran(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result("Dokumentace ");
      if (isTemplate) result += "??ablony ";
      switch(compType)
      {
        case ClassDef::Class:      result += "t????dy "; break;
        case ClassDef::Struct:     result += "typu "; break;
        case ClassDef::Union:      result += "unie "; break;
        case ClassDef::Interface:  result += "rozhran?? "; break;
        case ClassDef::Protocol:   result += "protokolu "; break;
        case ClassDef::Category:   result += "kategorie "; break;
        case ClassDef::Exception:  result += "v??jimky "; break;
        default: break;
      }
      result += clName;
      return result;

    }
    /*! used as the title of the HTML page of a module (Fortran) */
    virtual QCString trModuleReference(const QCString &namespaceName)
    {
      QCString result="Dokumentace modulu ";
      result += namespaceName;
      return result;
    }

    /*! This is put above each page as a link to all members of modules. (Fortran) */
    virtual QCString trModulesMembers()
    { return "????sti modulu"; }

    /*! This is an introduction to the page with all modules members (Fortran) */
    virtual QCString trModulesMemberDescription(bool extractAll)
    {
      QCString result="N??sleduje seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="????st?? modul?? s odkazy ";
      if (extractAll)
      {
        result+="na dokumentaci modulu pro danou ????st:";
      }
      else
      {
        result+="na moduly, ke kter??m ????st pat????:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all modules (Fortran).
     */
    virtual QCString trModulesIndex()
    { return "Rejst????k modul??"; }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trModule(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Modul" : "modul"));
      if (!singular)  result+="y";
      return result;
    }

    /*! This is put at the bottom of a module documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFilesFortran(ClassDef::CompoundType compType,
        bool single)
    {
      // single is true implies a single file
      QCString result="Dokumentace ";
      switch(compType)
      {
        case ClassDef::Class:      result+="k tomuto modulu"; break;
        case ClassDef::Struct:     result+="k tomuto typu"; break;
        case ClassDef::Union:      result+="k t??to unii"; break;
        case ClassDef::Interface:  result+="k tomuto rozhran??"; break;
        case ClassDef::Protocol:   result+="k tomuto protokolu"; break;
        case ClassDef::Category:   result+="k t??to kategorii"; break;
        case ClassDef::Exception:  result+="k t??to v??jimce"; break;
        default: break;
      }
      result+=" byla vygenerov??na z ";
      if (single) result+="n??sleduj??c??ho souboru:";
      else result+="n??sleduj??c??ch soubor??:";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trType(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Typ" : "typ"));
      if (!singular)  result+="y";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trSubprogram(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Podprogram" : "podprogram"));
      if (!singular)  result+="y";
      return result;
    }

    /*! C# Type Constraint list */
    virtual QCString trTypeConstraints()
    {
      return "Omezen?? typ?? (Type Constraints)";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.6.0 (mainly for the new search engine)
//////////////////////////////////////////////////////////////////////////

    /*! directory relation for \a name */
    virtual QCString trDirRelation(const QCString &name)
    {
      return "Relace " + QCString(name);
    }

    /*! Loading message shown when loading search results */
    virtual QCString trLoading()
    {
      return "Na????t??m...";
    }

    /*! Label used for search results in the global namespace */
    virtual QCString trGlobalNamespace()
    {
      return "Glob??ln?? jmenn?? prostor";
    }

    /*! Message shown while searching */
    virtual QCString trSearching()
    {
      return "Vyhled??v??m...";
    }

    /*! Text shown when no search results are found */
    virtual QCString trNoMatches()
    {
      return "Nic se nena??lo";
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
      return "Soubor v "+name;
    }

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the second column mentions the
     *  destination file that is included.
     */
    virtual QCString trIncludesFileIn(const QCString &name)
    {
      return "Vkl??d?? (include) soubor z "+name;
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
      static const char *days[]   = { "po","??t","st","??t","p??","so","ne" };
      static const char *months[] = { "led","??no","b??e","dub","kv??","??er","??ec","srp","z????","????j","lis","pro" };
      QCString sdate;
      sdate.sprintf("%s %d. %s %d",days[dayOfWeek-1],day,months[month-1],year);
      if (includeTime)
      {
        QCString stime;
        stime.sprintf(" %.2d.%.2d:%.2d",hour,minutes,seconds);
        sdate+=stime;
      }
      return sdate;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.7.5
//////////////////////////////////////////////////////////////////////////

    /*! Header for the page with bibliographic citations */
    virtual QCString trCiteReferences()
    { return "Odkazy na literaturu"; }

    /*! Text for copyright paragraph */
    virtual QCString trCopyright()
    { return "Copyright"; }

    /*! Header for the graph showing the directory dependencies */
    virtual QCString trDirDepGraph(const QCString &name)
    { return QCString("Graf z??vislosti na adres??????ch pro ")+name+":"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.0
//////////////////////////////////////////////////////////////////////////

    /*! Detail level selector shown for hierarchical indices */
    virtual QCString trDetailLevel()
    { return "??rove?? detail??"; }

    /*! Section header for list of template parameters */
    virtual QCString trTemplateParameters()
    { return "Parametry ??ablon"; }

    /*! Used in dot graph when UML_LOOK is enabled and there are many fields */
    virtual QCString trAndMore(const QCString &number)
    { return "a "+number+" dal????(ch)..."; }

    /*! Used file list for a Java enum */
    virtual QCString trEnumGeneratedFromFiles(bool single)
    { QCString result = "Dokumentace pro tento v????et byla vygenerov??na z ";
      if (single)
          result += "n??sleduj??c??ho souboru:";
      else
          result += "n??sleduj??c??ch soubor??:";
      return result;
    }

    /*! Header of a Java enum page (Java enums are represented as classes). */
    virtual QCString trEnumReference(const QCString &name)
    { return "Reference k v????tu "+QCString(name); }

    /*! Used for a section containing inherited members */
    virtual QCString trInheritedFrom(const QCString &members,const QCString &what)
    { return QCString(members)+" d??d?? se z "+what; }

    /*! Header of the sections with inherited members specific for the
     *  base class(es)
     */
    virtual QCString trAdditionalInheritedMembers()
    { return "Dal???? zd??d??n?? ??leny"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a tooltip for the toggle button that appears in the
     *  navigation tree in the HTML output when GENERATE_TREEVIEW is
     *  enabled. This tooltip explains the meaning of the button.
     */
    virtual QCString trPanelSynchronisationTooltip(bool enable)
    {
      QCString opt = enable ? "povolit" : "zak??zat";
      return opt + " synchronizaci panel??";
    }

    /*! Used in a method of an Objective-C class that is declared in a
     *  a category. Note that the @1 marker is required and is replaced
     *  by a link.
     */
    virtual QCString trProvidedByCategory()
    {
      return "Deklarov??no v kategorii @0.";
    }

    /*! Used in a method of an Objective-C category that extends a class.
     *  Note that the @1 marker is required and is replaced by a link to
     *  the class method.
     */
    virtual QCString trExtendsClass()
    {
      return "Roz??i??uje t????du @0.";
    }

    /*! Used as the header of a list of class methods in Objective-C.
     *  These are similar to static public member functions in C++.
     */
    virtual QCString trClassMethods()
    {
      return "Metody t????dy";
    }

    /*! Used as the header of a list of instance methods in Objective-C.
     *  These are similar to public member functions in C++.
     */
    virtual QCString trInstanceMethods()
    {
      return "Metody instance";
    }

    /*! Used as the header of the member functions of an Objective-C class.
     */
    virtual QCString trMethodDocumentation()
    {
      return "Dokumentace metody";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.4
//////////////////////////////////////////////////////////////////////////

    /** old style UNO IDL services: implemented interfaces */
    virtual QCString trInterfaces()
    { return "Exportovan?? rozhran??"; }

    /** old style UNO IDL services: inherited services */
    virtual QCString trServices()
    { return "Za??len??n?? slu??by"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroups()
    { return "Konstantn?? skupiny"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroupReference(const QCString &namespaceName)
    {
      QCString result="Konstantn?? skupiny z ";
      result += namespaceName;
      return result;
    }
    /** UNO IDL service page title */
    virtual QCString trServiceReference(const QCString &sName)
    {
      QCString result="Popis slu??by ";
      result += sName;
      return result;
    }
    /** UNO IDL singleton page title */
    virtual QCString trSingletonReference(const QCString &sName)
    {
      QCString result="Popis singletonu ";
      result += sName;
      return result;
    }
    /** UNO IDL service page */
    virtual QCString trServiceGeneratedFromFiles(bool single)
    {
      // single is true implies a single file
      QCString result="Dokumentace k t??to slu??b?? byla vygenerov??na ";
      if (single) result+="z n??sleduj??c??ho souboru:";
      else        result+="z n??sleduj??c??ch soubor??:";
      return result;
    }
    /** UNO IDL singleton page */
    virtual QCString trSingletonGeneratedFromFiles(bool single)
    {
      // single is true implies a single file
      QCString result="Dokumentace k tomuto singletonu byla vygenerov??na ";
      if (single) result+="z n??sleduj??c??ho souboru:";
      else        result+="z n??sleduj??c??ch soubor??:";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.15
//////////////////////////////////////////////////////////////////////////

    /** VHDL design unit hierarchy */
    virtual QCString trDesignUnitHierarchy()
    { return "Hierarchie n??vrhov??ch jednotek"; }
    /** VHDL design unit list */
    virtual QCString trDesignUnitList()
    { return "Seznam n??vrhov??ch jednotek"; }
    /** VHDL design unit members */
    virtual QCString trDesignUnitMembers()
    { return "Seznam ??len?? n??vrhov??ch jednotky"; }
    /** VHDL design unit list description */
    virtual QCString trDesignUnitListDescription()
    {
        return "Zde naleznete seznam v??ech ??len?? n??vrhov?? jednotky s odkazy na "
            "entity, ke kter??m p????slu??ej??:";
    }
    /** VHDL design unit index */
    virtual QCString trDesignUnitIndex()
    { return "Rejst????k n??vrhov??ch jednotek"; }
    /** VHDL design units */
    virtual QCString trDesignUnits()
    { return "N??vrhov?? jednotky"; }
    /** VHDL functions/procedures/processes */
    virtual QCString trFunctionAndProc()
    { return "Funkce/Procedury/Procesy"; }
    /** VHDL type */
    virtual QCString trVhdlType(uint64 type,bool single)
    {
      switch(type)
      {
        case VhdlDocGen::LIBRARY:
          if (single) return "Knihovna";
          else        return "Knihovny";
        case VhdlDocGen::PACKAGE:
          if (single) return "Bal??k";
          else        return "Bal??ky";
        case VhdlDocGen::SIGNAL:
          if (single) return "Sign??l";
          else        return "Sign??ly";
        case VhdlDocGen::COMPONENT:
          if (single) return "Komponenta";
          else        return "Komponenty";
        case VhdlDocGen::CONSTANT:
          if (single) return "Konstanta";
          else        return "Konstanty";
        case VhdlDocGen::ENTITY:
          if (single) return "Entita";
          else        return "Entity";
        case VhdlDocGen::TYPE:
          if (single) return "Typ";
          else        return "Typy";
        case VhdlDocGen::SUBTYPE:
          if (single) return "Subtyp";
          else        return "Subtypy";
        case VhdlDocGen::FUNCTION:
          if (single) return "Funkce";
          else        return "Funkce";
        case VhdlDocGen::RECORD:
          if (single) return "Z??znam";
          else        return "Z??znamy";
        case VhdlDocGen::PROCEDURE:
          if (single) return "Procedura";
          else        return "Procedury";
        case VhdlDocGen::ARCHITECTURE:
          if (single) return "Architektura";
          else        return "Architektury";
        case VhdlDocGen::ATTRIBUTE:
          if (single) return "Atribut";
          else        return "Atributy";
        case VhdlDocGen::PROCESS:
          if (single) return "Proces";
          else        return "Procesy";
        case VhdlDocGen::PORT:
          if (single) return "Br??na";
          else        return "Br??ny";
        case VhdlDocGen::USE:
          if (single) return "Klauzule use";
          else        return "Klauzule use";
        case VhdlDocGen::GENERIC:
          if (single) return "Generick?? parametr";
          else        return "Generick?? parametry";
        case VhdlDocGen::PACKAGE_BODY:
          return "T??lo bal??ku";
        case VhdlDocGen::UNITS:
          return "Fyzik??ln?? jednotky";
        case VhdlDocGen::SHAREDVARIABLE:
          if (single) return "Sd??len?? prom??nn??";
          else        return "Sd??len?? prom??nn??";
        case VhdlDocGen::VFILE:
          if (single) return "Soubor";
          else        return "Soubory";
        case VhdlDocGen::GROUP:
          if (single) return "Skupina";
          else        return "Skupiny";
        case VhdlDocGen::INSTANTIATION:
          if (single) return "Vlo??en?? instance";
          else        return "Vlo??en?? instance";
        case VhdlDocGen::ALIAS:
          if (single) return "Alias";
          else        return "Aliasy";
        case VhdlDocGen::CONFIG:
          if (single) return "Konfigurace";
          else        return "Konfigurace";
        case VhdlDocGen::MISCELLANEOUS:
          return "Ostatn??";
        case VhdlDocGen::UCF_CONST:
          return "Omezen?? (constraints)";
        default:
          return "T????da";
      }
    }
    virtual QCString trCustomReference(const QCString &name)
    { return "Dokumentace pro "+QCString(name); }

    /* Slice */
    virtual QCString trConstants()
    {
        return "Konstanty";
    }
    virtual QCString trConstantDocumentation()
    {
        return "Dokumentace konstant";
    }
    virtual QCString trSequences()
    {
        return "Sekvence";
    }
    virtual QCString trSequenceDocumentation()
    {
        return "Dokumentace sekvence";
    }
    virtual QCString trDictionaries()
    {
        return "Slovn??ky";
    }
    virtual QCString trDictionaryDocumentation()
    {
        return "Dokumentace slovn??ku";
    }
    virtual QCString trSliceInterfaces()
    {
        return "Rozhran??";
    }
    virtual QCString trInterfaceIndex()
    {
        return "Rejst????k rozhran??";
    }
    virtual QCString trInterfaceList()
    {
        return "Seznam rozhran??";
    }
    virtual QCString trInterfaceListDescription()
    {
        return "N??sleduj??c?? seznam obsahuje jm??na rozhran?? a jejich stru??n?? popisy:";
    }
    virtual QCString trInterfaceHierarchy()
    {
        return "Hierarchie rozhran??";
    }
    virtual QCString trInterfaceHierarchyDescription()
    {
        return "Zde naleznete seznam, vyjad??uj??c?? vztah d??di??nosti rozhran??. Je se??azen p??ibli??n?? (ale ne ??pln??) podle abecedy:";
    }
    virtual QCString trInterfaceDocumentation()
    {
        return "Dokumentace rozhran??";
    }
    virtual QCString trStructs()
    {
        return "Struktury";
    }
    virtual QCString trStructIndex()
    {
        return "Rejst????k struktur";
    }
    virtual QCString trStructList()
    {
        return "Seznam struktur";
    }
    virtual QCString trStructListDescription()
    {
        return "N??sleduj??c?? seznam obsahuje jm??na struktur a jejich stru??n?? popisy:";
    }
    virtual QCString trStructDocumentation()
    {
        return "Dokumentace struktur";
    }
    virtual QCString trExceptionIndex()
    {
        return "Rejst????k vyj??mek";
    }
    virtual QCString trExceptionList()
    {
        return "Seznam vyj??mek";
    }
    virtual QCString trExceptionListDescription()
    {
        return "N??sleduj??c?? seznam obsahuje jm??na v??j??mek a jejich stru??n?? popisy:";
    }
    virtual QCString trExceptionHierarchy()
    {
        return "Hierarchie vyj??mek";
    }
    virtual QCString trExceptionHierarchyDescription()
    {
        return "Zde naleznete seznam, vyjad??uj??c?? vztah d??di??nosti vyj??mek. Je se??azen p??ibli??n?? (ale ne ??pln??) podle abecedy:";
    }
    virtual QCString trExceptionDocumentation()
    {
        return "Dokumentace vyj??mek";
    }
    virtual QCString trCompoundReferenceSlice(const QCString &clName, ClassDef::CompoundType compType, bool isLocal)
    {
      QCString result("Dokumentace ");
      if (isLocal) result+=" lok??ln??";
      switch(compType)
      {
        case ClassDef::Class:      result+=" t????dy "; break;
        case ClassDef::Struct:     result+=" struktury "; break;
        case ClassDef::Union:      result+=" unie "; break;
        case ClassDef::Interface:  result+=" rozhran?? "; break;
        case ClassDef::Protocol:
           if (isLocal) result+="ho";
           result+=" protokolu ";
        break;
        case ClassDef::Category:   result+=" kategorie "; break;
        case ClassDef::Exception:  result+=" vyj??mky "; break;
        default: break;
      }
      result += clName;
      return result;
    }
    virtual QCString trOperations()
    {
        return "Operace";
    }
    virtual QCString trOperationDocumentation()
    {
        return "Dokumentace operace";
    }
    virtual QCString trDataMembers()
    {
        return "Datov?? ??leny";
    }
    virtual QCString trDataMemberDocumentation()
    {
        return "Dokumentace datov??ch ??len??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.19
//////////////////////////////////////////////////////////////////////////

    /** VHDL design unit documentation */
    virtual QCString trDesignUnitDocumentation()
    { return "Dokumentace n??vrhov?? jednotky"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.9.2
//////////////////////////////////////////////////////////////////////////

    /** C++20 concept */
    virtual QCString trConcept(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Koncept" : "koncept"));
      if (!singular) result+="y";
      return result;
    }
    /*! used as the title of the HTML page of a C++20 concept page */
    virtual QCString trConceptReference(const QCString &conceptName)
    {
      QCString result("Dokumentace konceptu ");
      result+=conceptName;
      return result;
    }

    /*! used as the title of page containing all the index of all concepts. */
    virtual QCString trConceptList()
    { return "Seznam koncept??"; }

    /*! used as the title of chapter containing the index listing all concepts. */
    virtual QCString trConceptIndex()
    { return "Rejst????k koncept??"; }

    /*! used as the title of chapter containing all information about concepts. */
    virtual QCString trConceptDocumentation()
    { return "Dokumentace koncept??"; }

    /*! used as an introduction to the concept list */
    virtual QCString trConceptListDescription(bool extractAll)
    {
      QCString result="N??sleduje seznam v??ech ";
      if (!extractAll) result+="dokumentovan??ch ";
      result+="koncept?? se stru??n??mi popisy:";
      return result;
    }

    /*! used to introduce the definition of the C++20 concept */
    virtual QCString trConceptDefinition()
    {
      return "Definice koncept??";
    }
};

#endif // TRANSLATOR_CZ_H
