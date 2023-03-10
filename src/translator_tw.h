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
 * The translation into Chinesetraditional was provided by
 *   Daniel YC Lin (dlin.tw <at> gmail.com) since v1.2.16-v1.5.5
 */

#ifndef TRANSLATOR_TW_H
#define TRANSLATOR_TW_H

// When defining a translator class for the new language, follow
// the description in the documentation.  One of the steps says
// that you should copy the translator_en.h (this) file to your
// translator_xx.h new file.  Your new language should use the
// Translator class as the base class.  This means that you need to
// implement exactly the same (pure virtual) methods as the
// TranslatorEnglish does.  Because of this, it is a good idea to
// start with the copy of TranslatorEnglish and replace the strings
// one by one.
//
// It is not necessary to include "translator.h" or
// "translator_adapter.h" here.  The files are included in the
// language.cpp correctly.  Not including any of the mentioned
// files frees the maintainer from thinking about whether the
// first, the second, or both files should be included or not, and
// why.  This holds namely for localized translators because their
// base class is changed occasionally to adapter classes when the
// Translator class changes the interface, or back to the
// Translator class (by the local maintainer) when the localized
// translator is made up-to-date again.

class TranslatorChinesetraditional : public TranslatorAdapter_1_8_15
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
    { return "chinese-traditional"; }

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
      return "\\usepackage{CJKutf8}\n";
    }
    virtual QCString latexFontenc()
    {
      return "";
    }
    virtual QCString latexDocumentPre()
    {
      return "\\begin{CJK}{UTF8}{min}\n";
    }
    virtual QCString latexDocumentPost()
    {
      return "\\end{CJK}\n";
    }
    virtual QCString trISOLang()
    {
      return "zh-Hant";
    }
    virtual QCString getLanguageString()
    {
      return "0x404 Chinese (Taiwan)";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    virtual QCString trRelatedFunctions()
    { return "????????????"; }

    /*! subscript for the related functions. */
    virtual QCString trRelatedSubscript()
    { return "(??????????????????????????????)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "????????????"; }

    /*! header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "??????????????????????????????"; }

    /*! header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "??????????????????????????????"; }

    /*! header that is put before the list of member functions. */
    virtual QCString trMemberFunctionDocumentation()
    { return "????????????????????????"; }

    /*! header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "??????????????????";
      }
      else
      {
        return "????????????????????????";
      }
    }

    /*! this is the text of a link put after brief descriptions. */
    virtual QCString trMore()
    { return "??????..."; }

    /*! put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "??????????????????"; }

    /*! used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "????????????"; }

    /*! this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "??????????????????????????????"; }

    /*! this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return ", ???????????????????????????"; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const QCString &s)
    { QCString result="????????????Doxygen";
      if (!s.isEmpty()) result+=" ??? "+s;
      result+=" ???????????????????????????.";
      return result;
    }

    /*! put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "??????????????????"; }

    /*! put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "?????????"; }

    /*! put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "????????????"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \\group command).
     */
    virtual QCString trModules()
    { return "??????"; }

    /*! This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "????????????"; }

    /*! This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "????????????";
      }
    }

    /*! This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "????????????"; }

    /*! This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "????????????";
      }
    }

    /*! This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "????????????";
      }
    }

    /*! This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "????????????"; }

    /*! This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "??????"; }

    /*! This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "??????"; }

    /*! This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    { return "?????????????????????????????????????????????: ";
    }

    /*! This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="????????????????????????";
      if (!extractAll) result+="??????????????????";
      result+="???????????????:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    {

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "???????????????????????????????????????:";
      }
      else
      {
        return "?????????????????????????????????????????????"
               "????????????(unions)?????????(interfaces):";
      }
    }

    /*! This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="????????????";
      if (!extractAll)
      {
        result+="????????????";
      }
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="???????????????????????????";
      }
      else
      {
        result+="????????????";
      }
      result+=", ?????????????????????";
      if (!extractAll)
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="?????????????????????/????????????????????????:";
        }
        else
        {
          result+="?????????????????????????????????:";
        }
      }
      else
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="????????????/??????????????????:";
        }
        else
        {
          result+="??????????????????:";
        }
      }
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="????????????";
      if (!extractAll) result+="????????????";

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="???????????????????????????????????????????????????";
      }
      else
      {
        result+="????????????";
      }
      result+="????????????????????????";
      if (extractAll)
        result+="??????????????????:";
      else
        result+="????????????:";
      return result;
    }

    /*! This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "??????????????????:"; }

    /*! This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "??????????????????????????????:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "??????????????????:"; }

    // index titles (the project name is prepended for these)


    /*! This is used in HTML as the title of index.html. */
    virtual QCString trDocumentation()
    { return "????????????"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "????????????"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "????????????"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "??????????????????";
      }
      else
      {
        return "????????????";
      }
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex()
    { return "????????????"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "??????????????????"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????????????????";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
          return trDesignUnitDocumentation();
      }
      else
      {
        return "??????????????????";
      }
    }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "??????????????????"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "??????????????????"; }

    /*! This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "????????????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    virtual QCString trDefines()
    { return "??????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "????????????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "????????????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "??????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "??????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "?????????"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "????????????????????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "????????????????????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "????????????????????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "?????????????????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "??????????????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "??????????????????"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "????????????";
      }
    }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    virtual QCString trGeneratedAt(const QCString &date,const QCString &projName)
    {
      QCString result="????????????:"+date;
      if (!projName.isEmpty()) result+=", ??????:"+projName;
      result+=", ?????????:";
      return result;
    }

    /*! this text is put before a class diagram */
    virtual QCString trClassDiagram(const QCString &clName)
    {
      return "??????"+clName+"????????????:";
    }

    /*! this text is generated when the \\warning command is used. */
    virtual QCString trWarning()
    { return "??????"; }

    /*! this text is generated when the \\version command is used. */
    virtual QCString trVersion()
    { return "??????"; }

    /*! this text is generated when the \\date command is used. */
    virtual QCString trDate()
    { return "??????"; }

    /*! this text is generated when the \\return command is used. */
    virtual QCString trReturns()
    { return "?????????"; }

    /*! this text is generated when the \\sa command is used. */
    virtual QCString trSeeAlso()
    { return "??????"; }

    /*! this text is generated when the \\param command is used. */
    virtual QCString trParameters()
    { return "??????"; }

    /*! this text is generated when the \\exception command is used. */
    virtual QCString trExceptions()
    { return "??????"; }

    /*! this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "?????????:"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "????????????(name space)??????"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="?????????????????????????????????";
      if (!extractAll) result+="????????????";
      result+="????????????(namespaces):";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "????????????(Friends)"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "???????????????????????????????????????"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result=clName+" ";
      switch(compType)
      {
        case ClassDef::Class:      result+=" ??????"; break;
        case ClassDef::Struct:     result+=" ??????"; break;
        case ClassDef::Union:      result+=" ??????"; break;
        case ClassDef::Interface:  result+=" ??????"; break;
        case ClassDef::Protocol:   result+=" ??????"; break;
        case ClassDef::Category:   result+=" ??????"; break;
        case ClassDef::Exception:  result+=" ??????"; break;
        default: break;
      }
      if (isTemplate) result+=" ??????";
      result+=" ????????????";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const QCString &fileName)
    {
      QCString result=fileName;
      result+=" ??????????????????";
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const QCString &namespaceName)
    {
      QCString result=namespaceName;
      result+=" ????????????(Namespace)????????????";
      return result;
    }

    virtual QCString trPublicMembers()
    { return "????????????(Public Methods)"; }
    virtual QCString trPublicSlots()
    { return "????????????(Public Slots)"; }
    virtual QCString trSignals()
    { return "??????(Signals)"; }
    virtual QCString trStaticPublicMembers()
    { return "??????????????????(Static Public Methods)"; }
    virtual QCString trProtectedMembers()
    { return "????????????(Protected Methods)"; }
    virtual QCString trProtectedSlots()
    { return "????????????(Protected Slots)"; }
    virtual QCString trStaticProtectedMembers()
    { return "??????????????????(Static Protected Methods)"; }
    virtual QCString trPrivateMembers()
    { return "????????????(Private Methods)"; }
    virtual QCString trPrivateSlots()
    { return "????????????(Private Slots)"; }
    virtual QCString trStaticPrivateMembers()
    { return "??????????????????(Static Private Methods)"; }

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
            result+=", ??? ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "????????? "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "??? "+trWriteList(numEntries)+"??????.";
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "??????"+trWriteList(numEntries)+"????????????.";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "???"+trWriteList(numEntries)+"????????????.";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "????????????(Namespace)??????"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="????????????????????? ";
      if (!extractAll) result+="???????????? ";
      result+="????????????(namespace)?????????????????????????????? ";
      if (extractAll)
        result+="???????????????????????????:";
      else
        result+="???????????????????????????:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "????????????(Namespace)??????"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "????????????(Namespace)????????????"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "????????????(Namespaces)"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,bool)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result="???";
      switch(compType)
      {
        case ClassDef::Class:      result+="??????(class)"; break;
        case ClassDef::Struct:     result+="??????(structure)"; break;
        case ClassDef::Union:      result+="??????(union)"; break;
        case ClassDef::Interface:  result+="??????(interface)"; break;
        case ClassDef::Protocol:   result+="??????(protocol)"; break;
        case ClassDef::Category:   result+="??????(category)"; break;
        case ClassDef::Exception:  result+="??????(exception)"; break;
        default: break;
      }
      result+=" ?????????????????????????????????";
      result+=":";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "?????????"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "?????????"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "p."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "????????? @1 ???????????? @0 ???.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "????????? @0 ???.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const QCString &clName)
    {
      return ""+clName+"????????????:";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const QCString &fName)
    {
      return ""+fName+"??????????????????:";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "?????????????????????????????????";
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "???????????????????????????.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "???????????????????????????.";
    }
    /*! Text for the \\pre command */
    virtual QCString trPrecondition()
    {
      return "????????????";
    }
    /*! Text for the \\post command */
    virtual QCString trPostcondition()
    {
      return "????????????";
    }
    /*! Text for the \\invariant command */
    virtual QCString trInvariant()
    {
      return "??????";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "??????:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "?????????";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "????????????????????????";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "??????????????????????????????";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "??????????????????????????????";
    }
    virtual QCString trPageIndex()
    {
      return "????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    virtual QCString trNote()
    {
      return "???";
    }
    virtual QCString trPublicTypes()
    {
      return "????????????";
    }
    virtual QCString trPublicAttribs()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "????????????";
      }
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "??????????????????";
    }
    virtual QCString trProtectedTypes()
    {
      return "????????????";
    }
    virtual QCString trProtectedAttribs()
    {
      return "????????????";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "??????????????????";
    }
    virtual QCString trPrivateTypes()
    {
      return "????????????";
    }
    virtual QCString trPrivateAttribs()
    {
      return "????????????";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "??????????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\todo item */
    virtual QCString trTodo()
    {
      return "????????????";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "??????????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "????????????";
    }
    virtual QCString trRemarks()
    {
      return "??????";
    }
    virtual QCString trAttention()
    {
      return "??????";
    }
    virtual QCString trInclByDepGraph()
    {
      return "??????????????????????????????????????????include?????? "
             ":";
    }
    virtual QCString trSince()
    {
      return "???";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "??????";
    }
    /*! page explaining how the dot graph's should be interpreted
     *  The %A in the text below are to prevent link to classes called "A".
     */
    virtual QCString trLegendDocs()
    {
      return
        "?????????????????????????????????doxygen?????????????????? "
        ".<p>\n"
        "??????????????????:\n"
        "\\code\n"
        "/*! ??????????????????????????????????????? */\n"
        "class Invisible { };\n\n"
        "/*! ???????????????, ????????????????????? */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* ?????????doxygen???????????????????????? */\n"
        "class Undocumented { };\n\n"
        "/*! ????????????(Public)??????????????? */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! ?????????????????? */\n"
        "template<class T> class Templ { };\n\n"
        "/*! ????????????(Protected)??????????????? */\n"
        "class ProtectedBase { };\n\n"
        "/*! ????????????(Private)??????????????? */\n"
        "class PrivateBase { };\n\n"
        "/*! ???????????????????????????????????? */\n"
        "class Used { };\n\n"
        "/*! ?????????????????????????????????????????????(Super Class) */\n"
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
        "????????????????????????????????????:"
        "<p><center><img alt=\"\" src=\"graph_legend."+getDotImageExtension()+"\"></center></p>\n"
        "<p>\n"
        "?????????????????????????????????:\n"
        "</p>\n"
        "<ul>\n"
        "<li>%A ??????????????????????????????????????????????????????????????? "
        ".\n"
        "<li>%A ???????????????????????????????????????????????????.</li>\n"
        "<li>%A ?????????????????????????????????????????????????????????.</li>\n"
        "<li>%A ??????????????????????????????????????????????????????"
        "???????????????????????????????????????????????????????????????. %A ?????? "
        "????????????????????????????????????????????????.</li>\n"
        "</ul>\n"
        "<p>\n"
        "???????????????????????????:\n"
        "</p>\n"
        "<ul>\n"
        "<li>%A ????????????????????????????????????????????????????????? "
        "??????.\n"
        "<li>%A ????????????????????????????????????</li>\n"
        "<li>%A ????????????????????????????????????</li>\n"
        "<li>%A ????????????????????????????????????????????????????????????."
        "??????????????????????????????????????????????????????????????????</li>\n"
        "<li>%A ???????????????????????????????????????????????????????????????"
        "?????????????????????????????????????????????</li>\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "????????????";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "??????????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "??????(properties)";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "??????(property)????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "????????????";
      }
      else
      {
        return "??????";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const QCString &name)
    {
      return "Package "+name;
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "?????????Package???????????????(???????????????):";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Packages";
    }

    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "????????????:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "??????";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "????????????";
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
      return "950";
    }


    /*! Used as ansicpg for RTF fcharset
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "136";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "??????";
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trClass(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trFile(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trNamespace(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("????????????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGroup(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trPage(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trMember(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGlobal(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*! This text is generated when the \\author command is used and
     *  for the author section in man pages. */
    virtual QCString trAuthor(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////

    /*! used in member documentation blocks to produce a list of
     *  members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "?????? "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all members that implement this abstract member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "????????? "+trWriteList(numEntries)+".";
    }

    //////////////////////////////////////////////////////////////////////////
// new since 1.2.16
//////////////////////////////////////////////////////////////////////////

    /*! used in RTF documentation as a heading for the Table
     *  of Contents.
     */
    virtual QCString trRTFTableOfContents()
    {
      return "??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.17
//////////////////////////////////////////////////////////////////////////

    /*! Used as the header of the list of item that have been
     *  flagged deprecated
     */
    virtual QCString trDeprecatedList()
    {
      return "????????????(Deprecated) ??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.18
//////////////////////////////////////////////////////////////////////////

    /*! Used as a header for declaration section of the events found in
     * a C# program
     */
    virtual QCString trEvents()
    {
      return "Events";
    }
    /*! Header used for the documentation section of a class' events. */
    virtual QCString trEventDocumentation()
    {
      return "Event ??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a heading for a list of Java class types with package scope.
     */
    virtual QCString trPackageTypes()
    {
      return "Package ??????";
    }
    /*! Used as a heading for a list of Java class functions with package
     * scope.
     */
    virtual QCString trPackageFunctions()
    {
      return "Package ????????????";
    }
    virtual QCString trPackageMembers()
    {
      return "Package ????????????";
    }
    /*! Used as a heading for a list of static Java class functions with
     *  package scope.
     */
    virtual QCString trStaticPackageFunctions()
    {
      return "?????? Package ????????????";
    }
    /*! Used as a heading for a list of Java class variables with package
     * scope.
     */
    virtual QCString trPackageAttribs()
    {
      return "Package ??????";
    }
    /*! Used as a heading for a list of static Java class variables with
     * package scope.
     */
    virtual QCString trStaticPackageAttribs()
    {
      return "?????? Package ??????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.1
//////////////////////////////////////////////////////////////////////////

    /*! Used in the quick index of a class/file/namespace member list page
     *  to link to the unfiltered list of all members.
     */
    virtual QCString trAll()
    {
      return "??????";
    }
    /*! Put in front of the call graph for a function. */
    virtual QCString trCallGraph()
    {
      return "?????????????????????????????????:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.3
//////////////////////////////////////////////////////////////////////////

    /*! This string is used as the title for the page listing the search
     *  results.
     */
    virtual QCString trSearchResultsTitle()
    {
      return "????????????";
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
        return "????????????????????????.";
      }
      else if (numDocuments==1)
      {
        return "?????? <b>1</b> ??????????????????.";
      }
      else
      {
        return "?????? <b>$num</b> ??????????????????. "
               "????????????????????????????????????.";
      }
    }
    /*! This string is put before the list of matched words, for each search
     *  result. What follows is the list of words that matched the query.
     */
    virtual QCString trSearchMatches()
    {
      return "??????:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.8
//////////////////////////////////////////////////////////////////////////

    /*! This is used in HTML as the title of page with source code for file filename
     */
    virtual QCString trSourceFile(QCString& filename)
    {
      return filename + " ???????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.9
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the name of the chapter containing the directory
     *  hierarchy.
     */
    virtual QCString trDirIndex()
    { return "????????????"; }

    /*! This is used as the name of the chapter containing the documentation
     *  of the directories.
     */
    virtual QCString trDirDocumentation()
    { return "??????????????????"; }

    /*! This is used as the title of the directory index and also in the
     *  Quick links of a HTML page, to link to the directory hierarchy.
     */
    virtual QCString trDirectories()
    { return "??????"; }

    /*! This returns the title of a directory page. The name of the
     *  directory is passed via \a dirName.
     */
    virtual QCString trDirReference(const QCString &dirName)
    { QCString result=dirName; result+=" ??????????????????"; return result; }

    /*! This returns the word directory with or without starting capital
     *  (\a first_capital) and in sigular or plural form (\a singular).
     */
    virtual QCString trDir(bool /*first_capital*/, bool /*singular*/)
    {
      return QCString("??????");
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.1
//////////////////////////////////////////////////////////////////////////

    /*! This text is added to the documentation when the \\overload command
     *  is used for a overloaded function.
     */
    virtual QCString trOverloadText()
    {
       return "???????????????????????????????????? overload ???????????????"
              "??????????????????????????????????????????????????????.";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.4.6
//////////////////////////////////////////////////////////////////////////

    /*! This is used to introduce a caller (or called-by) graph */
    virtual QCString trCallerGraph()
    {
      return "??????????????????????????????:";
    }


//////////////////////////////////////////////////////////////////////////
// new since 1.5.4 (mainly for Fortran)
//////////////////////////////////////////////////////////////////////////

    /*! header that is put before the list of member subprograms (Fortran). */
    virtual QCString trMemberFunctionDocumentationFortran()
    { return "????????????/????????? ??????"; }

    /*! This is put above each page as a link to the list of annotated data types (Fortran). */
    virtual QCString trCompoundListFortran()
    { return "??????????????????"; }

    /*! This is put above each page as a link to all members of compounds (Fortran). */
    virtual QCString trCompoundMembersFortran()
    { return "????????????"; }

    /*! This is an introduction to the annotated compound list (Fortran). */
    virtual QCString trCompoundListDescriptionFortran()
    { return "??????????????????????????????:"; }

    /*! This is an introduction to the page with all data types (Fortran). */
    virtual QCString trCompoundMembersDescriptionFortran(bool extractAll)
    {
      QCString result="??????????????????";
      if (!extractAll)
      {
        result+="????????????";
      }
      result+="????????????????????????";
      result+=" ??????????????? ";
      if (!extractAll)
      {
         result+="???????????????????????????????????????";
      }
      else
      {
         result+="???????????????????????????";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index (Fortran).
     */
    virtual QCString trCompoundIndexFortran()
    { return "??????????????????"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all data types (Fortran).
     */
    virtual QCString trTypeDocumentation()
    { return "??????????????????"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) subprograms (Fortran).
     */
    virtual QCString trSubprograms()
    { return "??????/?????????"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for subprograms (Fortran)
     */
    virtual QCString trSubprogramDocumentation()
    { return "??????/????????? ??????"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds (Fortran)
     */
     virtual QCString trDataTypes()
    { return "????????????"; }

    /*! used as the title of page containing all the index of all modules (Fortran). */
    virtual QCString trModulesList()
    { return "????????????"; }

    /*! used as an introduction to the modules list (Fortran) */
    virtual QCString trModulesListDescription(bool extractAll)
    {
      QCString result="??????????????????";
      if (!extractAll) result+="????????????";
      result+="????????????????????????:";
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
        case ClassDef::Class:      result+="??????"; break;
        case ClassDef::Struct:     result+="??????"; break;
        case ClassDef::Union:      result+="??????"; break;
        case ClassDef::Interface:  result+="??????"; break;
        case ClassDef::Protocol:   result+="??????"; break;
        case ClassDef::Category:   result+="??????"; break;
        case ClassDef::Exception:  result+="??????"; break;
        default: break;
      }
      if (isTemplate) result+=" Template";
      result+="????????????";
      return result;
    }
    /*! used as the title of the HTML page of a module (Fortran) */
    virtual QCString trModuleReference(const QCString &namespaceName)
    {
      QCString result=namespaceName;
      result+="??????????????????";
      return result;
    }

    /*! This is put above each page as a link to all members of modules. (Fortran) */
    virtual QCString trModulesMembers()
    { return "????????????"; }

    /*! This is an introduction to the page with all modules members (Fortran) */
    virtual QCString trModulesMemberDescription(bool extractAll)
    {
      QCString result="??????????????????";
      if (!extractAll) result+="????????????";
      result+="???????????????????????????";
      if (extractAll)
      {
        result+="???????????????????????????:";
      }
      else
      {
        result+="?????????????????????:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all modules (Fortran).
     */
    virtual QCString trModulesIndex()
    { return "????????????"; }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trModule(bool /* first_capital */, bool /* singular */)
    {
      QCString result("??????");
      return result;
    }
    /*! This is put at the bottom of a module documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFilesFortran(ClassDef::CompoundType compType,
        bool /* single */)
    { // here s is one of " Module", " Struct" or " Union"
      // single is true implies a single file
      QCString result="??????";
      switch(compType)
      {
        case ClassDef::Class:      result+="??????"; break;
        case ClassDef::Struct:     result+="??????"; break;
        case ClassDef::Union:      result+="??????"; break;
        case ClassDef::Interface:  result+="??????"; break;
        case ClassDef::Protocol:   result+="??????"; break;
        case ClassDef::Category:   result+="??????"; break;
        case ClassDef::Exception:  result+="??????"; break;
        default: break;
      }
      result+="???????????????????????????";
      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trType(bool /* first_capital */, bool /* singular */)
    {
      QCString result("??????");
      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trSubprogram(bool /* first_capital */, bool /* singular */)
    {
      QCString result("?????????");
      return result;
    }

    /*! C# Type Constraint list */
    virtual QCString trTypeConstraints()
    {
      return "??????????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.6.0 (mainly for the new search engine)
//////////////////////////////////////////////////////////////////////////

    /*! directory relation for \a name */
    virtual QCString trDirRelation(const QCString &name)
    {
      return QCString(name)+" ??????";
    }

    /*! Loading message shown when loading search results */
    virtual QCString trLoading()
    {
      return "?????????...";
    }

    /*! Label used for search results in the global namespace */
    virtual QCString trGlobalNamespace()
    {
      return "??????????????????";
    }

    /*! Message shown while searching */
    virtual QCString trSearching()
    {
      return "?????????...";
    }

    /*! Text shown when no search results are found */
    virtual QCString trNoMatches()
    {
      return "???????????????";
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
      return "?????????"+name;
    }

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the second column mentions the
     *  destination file that is included.
     */
    virtual QCString trIncludesFileIn(const QCString &name)
    {
      return "???????????????"+name;
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
      static const char *days[]   = { "?????????","?????????","?????????","?????????","?????????","?????????","?????????" };
      static const char *months[] = { "1","2","3","4","5","6","7","8","9","10","11","12" };
      QCString sdate;
      sdate.sprintf("%d???%s???%d??? %s",year,months[month-1],day,days[dayOfWeek-1]);
      if (includeTime)
      {
        QCString stime;
        stime.sprintf(" %.2d:%.2d:%.2d",hour,minutes,seconds);
        sdate+=stime;
      }
      return sdate;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.7.5
//////////////////////////////////////////////////////////////////////////

    /*! Header for the page with bibliographic citations */
    virtual QCString trCiteReferences()
    { return "??????????????????"; }

    /*! Text for copyright paragraph */
    virtual QCString trCopyright()
    { return "????????????"; }

    /*! Header for the graph showing the directory dependencies */
    virtual QCString trDirDepGraph(const QCString &name)
    { return QCString(name)+"??????????????????"+":"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.0
//////////////////////////////////////////////////////////////////////////

    /*! Detail level selector shown for hierarchical indices */
    virtual QCString trDetailLevel()
    { return "????????????"; }

    /*! Section header for list of template parameters */
    virtual QCString trTemplateParameters()
    { return "????????????"; }

    /*! Used in dot graph when UML_LOOK is enabled and there are many fields */
    virtual QCString trAndMore(const QCString &number)
    { return "??? "+number+" ?????????..."; }

    /*! Used file list for a Java enum */
    virtual QCString trEnumGeneratedFromFiles(bool single)
    { QCString result = "???????????????????????????????????????????????????";
      if (!single) result += "";
      result+=":";
      return result;
    }

    /*! Header of a Java enum page (Java enums are represented as classes). */
    virtual QCString trEnumReference(const QCString &name)
    { return QCString(name)+" ??????????????????"; }

    /*! Used for a section containing inherited members */
    virtual QCString trInheritedFrom(const QCString &members,const QCString &what)
    { return QCString(members)+" ????????? "+what; }

    /*! Header of the sections with inherited members specific for the
     *  base class(es)
     */
    virtual QCString trAdditionalInheritedMembers()
    { return "?????????????????????"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a tooltip for the toggle button that appears in the
     *  navigation tree in the HTML output when GENERATE_TREEVIEW is
     *  enabled. This tooltip explains the meaning of the button.
     */
    virtual QCString trPanelSynchronisationTooltip(bool enable)
    {
      QCString opt = enable ? "??????" : "??????";
      return "?????? "+opt+" ??????????????????";
    }

    /*! Used in a method of an Objective-C class that is declared in a
     *  a category. Note that the @1 marker is required and is replaced
     *  by a link.
     */
    virtual QCString trProvidedByCategory()
    {
      return "??? @0 ???????????????.";
    }

    /*! Used in a method of an Objective-C category that extends a class.
     *  Note that the @1 marker is required and is replaced by a link to
     *  the class method.
     */
    virtual QCString trExtendsClass()
    {
      return "?????? @0 ?????? .";
    }

    /*! Used as the header of a list of class methods in Objective-C.
     *  These are similar to static public member functions in C++.
     */
    virtual QCString trClassMethods()
    {
      return "????????????";
    }

    /*! Used as the header of a list of instance methods in Objective-C.
     *  These are similar to public member functions in C++.
     */
    virtual QCString trInstanceMethods()
    {
      return "????????????";
    }

    /*! Used as the header of the member functions of an Objective-C class.
     */
    virtual QCString trMethodDocumentation()
    {
      return "????????????";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.4
//////////////////////////////////////////////////////////////////////////

    /** old style UNO IDL services: implemented interfaces */
    virtual QCString trInterfaces()
    { return "????????????"; }

    /** old style UNO IDL services: inherited services */
    virtual QCString trServices()
    { return "???????????????"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroups()
    { return "????????????"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroupReference(const QCString &namespaceName)
    {
      QCString result=namespaceName;
      result+="??????????????????";
      return result;
    }
    /** UNO IDL service page title */
    virtual QCString trServiceReference(const QCString &sName)
    {
      QCString result=sName;
      result+="????????????";
      return result;
    }
    /** UNO IDL singleton page title */
    virtual QCString trSingletonReference(const QCString &sName)
    {
      QCString result=sName;
      result+="Singleton??????";
      return result;
    }
    /** UNO IDL service page */
    virtual QCString trServiceGeneratedFromFiles(bool)
    {
      // single is true implies a single file
      QCString result="????????????????????????????????????"
                                "?????????";
      result+=":";
      return result;
    }
    /** UNO IDL singleton page */
    virtual QCString trSingletonGeneratedFromFiles(bool)
    {
      // single is true implies a single file
      QCString result="???singleton???????????????????????????"
                                "?????????";
      result+=":";
      return result;
    }

};

#endif
