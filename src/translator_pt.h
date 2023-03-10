/******************************************************************************
 * Copyright (C) 1997-2018 by Dimitri van Heesch.
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
 * Portuguese translation version
 *    Maintainer (from 04/28/2011):
 *       Fabio "FJTC" Jun Takada Chino <fjtc at brokenbits dot com dot br>
 *    Maintainer (until 04/28/2011):
 *       Rui Godinho Lopes <rui at ruilopes.com>
 *    Collaborators:
 *        Ulisses Guedes <uli1958 at hotmail dot com>
 *
 * Notes about this translation:
 *    Since I'm Brazilian, this translation may be odd or even incorrect for
 *    Portuguese (from Portugal) speakers. If you find any errors, feel free
 *    to contact me.
 *
 * VERSION HISTORY
 * ---------------
 * History:
 * 20211003:
 *  - Updated to 1.9.3;
 * 20200112:
 * 	- Updated to 1.9.1;
 * 20190203:
 *	- Slice methods added;
 * 20180612:
 *	- Updated to 1.8.15;
 * 20131129:
 *  - Updated to 1.8.5;
 *  - Translation in the method trFileMembers() fixed;
 * 20110628:
 *	- Updated to 1.7.5;
 *      - All obsolete methods have been removed;
 * 20110428
 *   - Updated to doxygen 1.6.3 using the Brazilian Portuguese as the base.
 *     Requires revision by a Portuguese (Portugal native speaker);
 * 007 09 june 2003
 *   ! Updated for doxygen v1.3.1
 * 006 30 july 2002
 *   ! Updated for doxygen v1.2.17
 * 005 10 july 2002
 *   ! Updated for doxygen v1.2.16
 * 004 03 march 2002
 *   ! Updated for doxygen v1.2.14
 * 003 23 november 2001
 *   - Removed some obsolete methods (latexBabelPackage, trAuthor, trAuthors and trFiles)
 * 002 19 november 2001
 *   ! Updated for doxygen v1.2.12
 * 001 20 july 2001
 *   ! Updated for doxygen v1.2.8.1
 * 000 ?
 *   + Initial translation for doxygen v1.1.5
 */

#ifndef TRANSLATOR_PT_H
#define TRANSLATOR_PT_H


class TranslatorPortuguese : public TranslatorAdapter_1_9_4
{
  public:

    // --- Language control methods -------------------

    /*! Used for identification of the language. The identification
     * should not be translated. It should be replaced by the name
     * of the language in English using lower-case characters only
     * (e.g. "czech", "japanese", "russian", etc.). It should be equal to
     * the identification used in language.cpp.
     */
    QCString idLanguage()
    { return "portuguese"; }

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
      return
        "\\usepackage[portuges]{babel}\n";
    }

    virtual QCString trISOLang()
    {
      return "pt";
    }
    virtual QCString getLanguageString()
    {
      return "0x816 Portuguese(Portugal)";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Fun????es associadas"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Note que n??o s??o fun????es membro)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "Descri????o detalhada"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Documenta????o das defini????es de tipo"; }

    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Documenta????o das enumera????es"; }

    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Documenta????o dos m??todos"; }

    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Documenta????o dos campos e atributos";
      }
      else
      {
        return "Documenta????o dos dados membro";
      }
    }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "Mais..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Mostrar lista completa dos membros"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Lista dos membros"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "Lista completa de todos os membros de "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return ", incluindo todos os membros herdados."; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const QCString &s)
    { QCString result="Gerado automaticamente por Doxygen";
      if (!s.isEmpty()) result+=" para "+s;
      result+=" a partir do c??digo fonte.";
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "enumera????o"; }

    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "valor enumerado"; }

    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "definido em"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \\group command).
     */
    QCString trModules()
    { return "M??dulos"; }

    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Hierarquia de classes"; }

    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Estruturas de dados";
      }
      else
      {
        return "Lista de componentes";
      }
    }

    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "Lista de ficheiros"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Campos de dados";
      }
      else
      {
        return "Componentes membro";
      }
    }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Globais";
      }
      else
      {
        return "Membros dos Ficheiros";
      }
    }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "P??ginas relacionadas"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "Exemplos"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Localizar"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Esta lista de heran??as est?? organizada, dentro do poss??vel, por ordem alfab??tica:"; }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Lista de todos os ficheiros ";
      if (!extractAll) result+="documentados ";
      result+="com uma breve descri????o:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Lista das estruturas de dados com uma breve descri????o:";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_SLICE))
      {
        return "Lista de classes com uma breve descri????o:";
      }
      else
      {
        return "Lista de classes, estruturas, uni??es e interfaces com uma breve descri????o:";
      }
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Lista de todas as";
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+=" estruturas e campos de uni??es";
      }
      else
      {
        result+=" classes membro";
      }
      if (!extractAll)
      {
        result+=" documentadas";
      }
      result+=" com refer??ncia para ";
      if (!extractAll)
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="a respectiva documenta????o:";
        }
        else
        {
          result+="a documenta????o de cada membro:";
        }
      }
      else
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="as estruturas/uni??es a que pertencem:";
        }
        else
        {
          result+="as classes a que pertencem:";
        }
      }
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Lista de ";
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="todas as fun????es, vari??veis, defini????es, enumera????es e defini????es de tipo ";
        if (!extractAll) result+="documentadas ";
      }
      else
      {
        result+="todos os ficheiros membro ";
        if (!extractAll) result+="documentados ";
      }
      result+="com refer??ncia para ";
      if (extractAll)
        result+="o ficheiro a que pertecem:";
      else
        result+="a respectiva documenta????o:";
      return result;
    }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Lista de todos os exemplos:"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Lista de documenta????o relacionada:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Lista de todos os m??dulos:"; }

    // index titles (the project name is prepended for these)


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Documenta????o"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "??ndice dos m??dulos"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "??ndice da hierarquia"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    QCString trCompoundIndex()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "??ndice das estruturas de dados";
      }
      else
      {
        return "??ndice dos componentes";
      }
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex()
    { return "??ndice dos ficheiros"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Documenta????o do m??dulo"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Documenta????o da estruturas de dados";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
          return trDesignUnitDocumentation();
      }
      else
      {
        return "Documenta????o da classe";
      }
    }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "Documenta????o do ficheiro"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "Documenta????o do exemplo"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Manual de refer??ncia"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    QCString trDefines()
    { return "Macros"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "Defini????es de tipos"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Enumera????es"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "Fun????es"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trVariables()
    { return "Vari??veis"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "Valores de enumera????es"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Documenta????o das macros"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Documenta????o dos tipos"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Documenta????o dos valores da enumera????o"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "Documenta????o das fun????es"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "Documenta????o das vari??veis"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Estruturas de Dados";
      }
      else
      {
        return "Componentes";
      }
    }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    QCString trGeneratedAt(const QCString &date,const QCString &projName)
    {
      QCString result="Gerado em "+date;
      if (!projName.isEmpty()) result+=" para "+projName;
      result+=" por";
      return result;
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const QCString &clName)
    {
      return "Diagrama de heran??as da classe "+clName;
    }

    /*! this text is generated when the \\warning command is used. */
    QCString trWarning()
    { return "Aviso"; }

    /*! this text is generated when the \\version command is used. */
    QCString trVersion()
    { return "Vers??o"; }

    /*! this text is generated when the \\date command is used. */
    QCString trDate()
    { return "Data"; }

    /*! this text is generated when the \\return command is used. */
    QCString trReturns()
    { return "Retorna"; }

    /*! this text is generated when the \\sa command is used. */
    QCString trSeeAlso()
    { return "Veja tamb??m"; }

    /*! this text is generated when the \\param command is used. */
    QCString trParameters()
    { return "Par??metros"; }

    /*! this text is generated when the \\exception command is used. */
    QCString trExceptions()
    { return "Excep????es"; }

    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "Gerado por"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Lista de namespaces"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Lista ";
      if (!extractAll) result+="de toda a documenta????o ";
      result+="dos namespaces com uma breve descri????o:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Amigos"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Documenta????o das classes amigas e fun????es relacionadas"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result="Refer??ncia ";
      switch(compType)
      {
        case ClassDef::Class:      result+="?? classe "; break;
        case ClassDef::Struct:     result+="?? estrutura "; break;
        case ClassDef::Union:      result+="?? uni??o "; break;
        case ClassDef::Interface:  result+="ao interface "; break;
        case ClassDef::Protocol:   result+="ao protocolo "; break;
        case ClassDef::Category:   result+="?? categoria "; break;
        case ClassDef::Exception:  result+="?? excep????o "; break;
        default: break;
      }
      if (isTemplate) result+="Template ";
      result+=clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const QCString &fileName)
    {
      QCString result= "Refer??ncia ao ficheiro ";
      result += fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const QCString &namespaceName)
    {
      QCString result= "Refer??ncia ao namespace ";
      result += namespaceName;
      return result;
    }

    /* these are for the member sections of a class, struct or union */
    virtual QCString trPublicMembers()
    { return "Membros p??blicos"; }
    virtual QCString trPublicSlots()
    { return "Slots p??blicos"; }
    virtual QCString trSignals()
    { return "Sinais"; }
    virtual QCString trStaticPublicMembers()
    { return "Membros p??blicos est??ticos"; }
    virtual QCString trProtectedMembers()
    { return "Membros protegidos"; }
    virtual QCString trProtectedSlots()
    { return "Slots protegidos"; }
    virtual QCString trStaticProtectedMembers()
    { return "Membros protegidos est??ticos"; }
    virtual QCString trPrivateMembers()
    { return "Membros privados"; }
    virtual QCString trPrivateSlots()
    { return "Slots privados"; }
    virtual QCString trStaticPrivateMembers()
    { return "Membros privados est??ticos"; }

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
            result+=" e ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "Derivada de "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "Herdado por "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementado de "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementado em "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Membros do namespace"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Lista ";
      if (extractAll) result+="de todos os ";
      else result+="de toda a documenta????o dos ";
      result+="membros do namespace com refer??ncia para ";
      if (extractAll)
        result+="a documenta????o de cada membro:";
      else
        result+="o namespace correspondente:";
      return result;
    }

  /*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "??ndice dos namespaces"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Documenta????o dos namespaces"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Namespaces"; }

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
      bool vhdlOpt = Config_getBool(OPTIMIZE_OUTPUT_VHDL);
      QCString result="A documenta????o para ";
      switch(compType)
      {
        case ClassDef::Class:      result+=vhdlOpt?"esta Unidade de Design":"esta classe"; break;
        case ClassDef::Struct:     result+="esta estrutura"; break;
        case ClassDef::Union:      result+="esta uni??o"; break;
        case ClassDef::Interface:  result+="este interface"; break;
        case ClassDef::Protocol:   result+="este protocolo"; break;
        case ClassDef::Category:   result+="esta categoria"; break;
        case ClassDef::Exception:  result+="esta excep????o"; break;
        default: break;
      }
      result+=" foi gerada a partir ";
      if (single) result+=" do seguinte ficheiro:";
      else result+="dos seguintes ficheiros:";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Valores retornados"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "P??gina principal"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "p. "; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Definido na linha @0 do ficheiro @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "Definido no ficheiro @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Desaprovado";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const QCString &clName)
    {
      return "Diagrama de colabora????o para "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const QCString &fName)
    {
      return "Diagrama de depend??ncias de inclus??o para "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Documenta????o dos Construtores & Destrutor";
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Ir para o c??digo fonte deste ficheiro.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Ir para a documenta????o deste ficheiro.";
    }
    /*! Text for the \\pre command */
    virtual QCString trPrecondition()
    {
      return "Precondi????o";
    }
    /*! Text for the \\post command */
    virtual QCString trPostcondition()
    {
      return "Poscondi????o";
    }
    /*! Text for the \\invariant command */
    virtual QCString trInvariant()
    {
      return "Invariante";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Valor inicial:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "c??digo";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Representa????o gr??fica da hiearquia da classe";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Ir para a representa????o gr??fica da hierarquia da classe";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Ir para a representa????o textual da hierarquia da classe";
    }
    virtual QCString trPageIndex()
    {
      return "??ndice da p??gina";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    virtual QCString trNote()
    {
      return "Nota";
    }
    virtual QCString trPublicTypes()
    {
      return "Tipos P??blicos";
    }
    virtual QCString trPublicAttribs()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Campos de Dados";
      }
      else
      {
        return "Atributos P??blicos";
      }
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Atributos P??blicos Est??ticos";
    }
    virtual QCString trProtectedTypes()
    {
      return "Tipos Protegidos";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Atributos Protegidos";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Atributos Protegidos Est??ticos";
    }
    virtual QCString trPrivateTypes()
    {
      return "Tipos Privados";
    }
    virtual QCString trPrivateAttribs()
    {
      return "Atributos Privados";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Atributos Privados Est??ticos";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    virtual QCString trTodo()
    {
      return "Tarefa";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Lista de tarefas";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Referenciado por";
    }
    virtual QCString trRemarks()
    {
      return "Observa????es";
    }
    virtual QCString trAttention()
    {
      return "Aten????o";
    }
    virtual QCString trInclByDepGraph()
    {
      return "Este grafo mostra quais s??o os ficheiros que incluem directamente ou indirectamente este ficheiro:";
    }
    virtual QCString trSince()
    {
      return "Desde";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "Legenda do grafo";
    }
    /*! page explaining how the dot graph's should be interpreted */
    virtual QCString trLegendDocs()
    {
      return
        "Esta p??gina explica como interpretar os grafos gerados pelo doxygen.<p>\n"
        "Considere o seguinte exemplo:\n"
        "\\code\n"
        "/*! Esta classe vai estar escondida devido ?? trunca????o */\n"
        "class Invisible { };\n\n"
        "/*! Esta classe tem a rela????o de heran??a escondida */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* Classe n??o documentada por coment??rios doxygen */\n"
        "class Undocumented { };\n\n"
        "/*! Classe derivada usando deriva????o p??blica */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! A template class */\n"
        "template<class T> class Templ { };\n\n"
        "/*! Classe derivada usando deriva????o protegida */\n"
        "class ProtectedBase { };\n\n"
        "/*! Classe derivada usando deriva????o privada */\n"
        "class PrivateBase { };\n\n"
        "/*! Classe usada pela classe Inherited */\n"
        "class Used { };\n\n"
        "/*! Super classe que deriva de v??rias classes */\n"
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
        "Isto ir?? gerar o seguinte gr??fo:"
        "<p><center><img src=\"graph_legend."+getDotImageExtension()+"\"></center>\n"
        "<p>\n"
        "As caixas no grafo anterior t??m as seguintes interpreta????es:\n"
        "<ul>\n"
        "<li>Uma caixa inteiramente preta representa a estrutura ou a classe para "
        "a qual o grafo foi gerado.\n"
        "<li>Uma caixa com borda preta representa uma estrutura ou classe documentada.\n"
        "<li>Uma caixa com borda cinzenta representa uma estrutura ou classe n??o documentada.\n"
        "<li>Uma caixa com borda vermelha representa uma estrutura ou classe documentada onde "
        "nem todas as rela????es de heran??a/encapsulamento s??o exibidas. Um grafo ?? truncado "
        "quando n??o cabe na sua ??rea predefinida.\n"
        "</ul>\n"
        "As setas t??m a seguinte interpreta????o:\n"
        "<ul>\n"
        "<li>Uma seta azul escura representa uma rela????o de heran??a p??blica entre duas classes.\n"
        "<li>Uma seta verde escura representa uma rela????o de heran??a protegida.\n"
        "<li>Uma seta vermelha escura representa uma rela????o de heran??a privada.\n"
        "<li>Uma seta rocha em tracejado representa uma rela????o de encapsulamento ou uso por "
        "parte de outra classe. A legenda da seta cont??m o nome da vari??vel ou vari??veis da "
        "rela????o. A seta aponta da classe que estabelece a rela????o para a classe ou estrutura que "
        "?? acess??vel.\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "legenda";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "Teste";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "Lista de teste";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "Propriedades";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "Documenta????o das propriedades";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Estruturas de dados";
      }
      else
      {
        return "Classes";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const QCString &name)
    {
      return "Pacote "+name;
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Lista de pacotes com uma breve descri????o (se dispon??vel):";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Pacotes";
    }
    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "Valor:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "Bug";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Lista de Bugs";
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
      return "1252";
    }


    /*! Used as ansicpg for RTF fcharset
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "0";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "??ndice";
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trClass(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Classe" : "classe"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trFile(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Ficheiro" : "ficheiro"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trNamespace(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Namespace" : "namespace"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGroup(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Grupo" : "grupo"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trPage(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "P??gina" : "p??gina"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trMember(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Membro" : "membro"));
      if (!singular)  result+="s";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Globa" : "globa"));
      result+= singular? "l" : "ais";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*! This text is generated when the \\author command is used and
     *  for the author section in man pages. */
    virtual QCString trAuthor(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Autor" : "autor"));
      if (!singular) result+="es";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Refer??ncias";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////

    /*! used in member documentation blocks to produce a list of
     *  members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "Implementa "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all members that implement this abstract member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "Implementado em "+trWriteList(numEntries)+".";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.16
//////////////////////////////////////////////////////////////////////////

    /*! used in RTF documentation as a heading for the Table
     *  of Contents.
     */
    virtual QCString trRTFTableOfContents()
    {
      return "??ndice";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.17
//////////////////////////////////////////////////////////////////////////

    /*! Used as the header of the list of item that have been
     *  flagged deprecated
     */
    virtual QCString trDeprecatedList()
    {
      return "Lista de Deprecados";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.18
//////////////////////////////////////////////////////////////////////////

    /*! Used as a header for declaration section of the events found in
     * a C# program
     */
    virtual QCString trEvents()
    {
      return "Eventos";
    }
    /*! Header used for the documentation section of a class' events. */
    virtual QCString trEventDocumentation()
    {
      return "Documenta????o dos eventos";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a heading for a list of Java class types with package scope.
     */
    virtual QCString trPackageTypes()
    {
      return "Tipos do Pacote";
    }
    /*! Used as a heading for a list of Java class functions with package
     * scope.
     */
    virtual QCString trPackageFunctions()
    {
      return "Fun????es do Pacote";
    }
    virtual QCString trPackageMembers()
    {
      return "Membros do Pacote";
    }
    /*! Used as a heading for a list of static Java class functions with
     *  package scope.
     */
    virtual QCString trStaticPackageFunctions()
    {
      return "Fun????es Est??ticas do Pacote";
    }
    /*! Used as a heading for a list of Java class variables with package
     * scope.
     */
    virtual QCString trPackageAttribs()
    {
      return "Atributos do Pacote";
    }
    /*! Used as a heading for a list of static Java class variables with
     * package scope.
     */
    virtual QCString trStaticPackageAttribs()
    {
      return "Atributos Est??ticos do Pacote";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.1
//////////////////////////////////////////////////////////////////////////

    /*! Used in the quick index of a class/file/namespace member list page
     *  to link to the unfiltered list of all members.
     */
    virtual QCString trAll()
    {
      return "Tudo";
    }
    /*! Put in front of the call graph for a function. */
    virtual QCString trCallGraph()
    {
      return "Grafo de chamadas desta fun????o:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.3 - Based on the Brazilian Portuguese Translation
//////////////////////////////////////////////////////////////////////////

    /*! This string is used as the title for the page listing the search
     *  results.
     */
    virtual QCString trSearchResultsTitle()
    {
      return "Resultado da Busca";
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
        return "Nenhum documento foi encontrado.";
      }
      else if (numDocuments==1)
      {
        return "Apenas <b>1</b> documento foi encontrado.";
      }
      else
      {
        return "<b>$num</b> documentos encontrados. "
               "Os melhores resultados vem primeiro.";
      }
    }
    /*! This string is put before the list of matched words, for each search
     *  result. What follows is the list of words that matched the query.
     */
    virtual QCString trSearchMatches()
    {
      return "Resultados:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.8
//////////////////////////////////////////////////////////////////////////

    /*! This is used in HTML as the title of page with source code for file filename
     */
    virtual QCString trSourceFile(QCString& filename)
    {
      return  "C??digo-Fonte de " + filename;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.9
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the name of the chapter containing the directory
     *  hierarchy.
     */
    virtual QCString trDirIndex()
    { return "Hierarquia de Diret??rios"; }

    /*! This is used as the name of the chapter containing the documentation
     *  of the directories.
     */
    virtual QCString trDirDocumentation()
    { return "Documenta????o do Direct??rio"; }

    /*! This is used as the title of the directory index and also in the
     *  Quick links of a HTML page, to link to the directory hierarchy.
     */
    virtual QCString trDirectories()
    { return "Diret??rios"; }

    /*! This returns the title of a directory page. The name of the
     *  directory is passed via \a dirName.
     */
    virtual QCString trDirReference(const QCString &dirName)
    {
        QCString result = "Refer??ncia do diret??rio ";
     	result += dirName;
     	return result;
    }

    /*! This returns the word directory with or without starting capital
     *  (\a first_capital) and in sigular or plural form (\a singular).
     */
    virtual QCString trDir(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Diret??rio" : "diret??rio"));
      if (!singular) result+="s";
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
       return "Este ?? um m??todo provido por conveni??ncia. "
       		"Ele difere do m??todo acima apenas na lista de "
       		"argumentos que devem ser utilizados.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.6
//////////////////////////////////////////////////////////////////////////

    /*! This is used to introduce a caller (or called-by) graph */
    virtual QCString trCallerGraph()
    {
      return "Este ?? o diagrama das fun????es que utilizam esta fun????o:";
    }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Documenta????o da enumera????o"; }


//////////////////////////////////////////////////////////////////////////
// new since 1.5.4 (mainly for Fortran)
//////////////////////////////////////////////////////////////////////////

    /*! header that is put before the list of member subprograms (Fortran). */
    virtual QCString trMemberFunctionDocumentationFortran()
    { return "Documenta????o de Fun????o Membro/Subrotina"; }

    /*! This is put above each page as a link to the list of annotated data types (Fortran). */
    virtual QCString trCompoundListFortran()
    { return "Lista de Tipos de Dados"; }

    /*! This is put above each page as a link to all members of compounds (Fortran). */
    virtual QCString trCompoundMembersFortran()
    { return "Campos de Dados"; }

    /*! This is an introduction to the annotated compound list (Fortran). */
    virtual QCString trCompoundListDescriptionFortran()
    { return "Aqui est??o os tipos de dados com descri????es resumidas:"; }

    /*! This is an introduction to the page with all data types (Fortran). */
    virtual QCString trCompoundMembersDescriptionFortran(bool extractAll)
    {
      QCString result="Esta ?? a lista de todos os membros ";
      if (!extractAll) result+="documentados ";
      result+="dos tipos de dados com links para ";
      if (extractAll)
      {
        result+="a documenta????o dos tipos de dados para cada membro:";
      }
      else
      {
        result+="os tipos de dados a que pertencem:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index (Fortran).
     */
    virtual QCString trCompoundIndexFortran()
    { return "??ndice de Tipos de Dados"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all data types (Fortran).
     */
    virtual QCString trTypeDocumentation()
    { return "Documenta????o dos Tipos de Dados"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) subprograms (Fortran).
     */
    virtual QCString trSubprograms()
    { return "Fun????es/Subrotinas"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for subprograms (Fortran)
     */
    virtual QCString trSubprogramDocumentation()
    { return "Documenta????o da Fun????o/Subrotina"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds (Fortran)
     */
     virtual QCString trDataTypes()
    { return "Tipos de Dados"; }

    /*! used as the title of page containing all the index of all modules (Fortran). */
    virtual QCString trModulesList()
    { return "Lista de M??dulos"; }

    /*! used as an introduction to the modules list (Fortran) */
    virtual QCString trModulesListDescription(bool extractAll)
    {
      QCString result="Esta ?? a lista de todos os m??dulos ";
      if (!extractAll) result+="documentados ";
      result+="com descri????es resumidas:";
      return result;
    }

    /*! used as the title of the HTML page of a module/type (Fortran) */
    virtual QCString trCompoundReferenceFortran(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result = "Refer??ncia ";

      if (isTemplate) result+="da Template ";

      switch(compType)
      {
        case ClassDef::Class:      result+="do Modulo "; break;
        case ClassDef::Struct:     result+="do Tipo "; break;
        case ClassDef::Union:      result+="da Uni??o "; break;
        case ClassDef::Interface:  result+="da Interface "; break;
        case ClassDef::Protocol:   result+="do Protocolo "; break;
        case ClassDef::Category:   result+="da Categoria "; break;
        case ClassDef::Exception:  result+="da Exce????o "; break;
        default: break;
      }
      result += clName;

      return result;
    }
    /*! used as the title of the HTML page of a module (Fortran) */
    virtual QCString trModuleReference(const QCString &namespaceName)
    {
      QCString result = "Refer??ncia do M??dulo ";
      result += namespaceName;
      return result;
    }

    /*! This is put above each page as a link to all members of modules. (Fortran) */
    virtual QCString trModulesMembers()
    { return "Membros do M??dulo"; }

    /*! This is an introduction to the page with all modules members (Fortran) */
    virtual QCString trModulesMemberDescription(bool extractAll)
    {
      QCString result="Esta ?? a lista de todos os membros ";
      if (!extractAll) result+="documentados ";
      result+="dos m??dulos com links para ";
      if (extractAll)
      {
        result+="a documenta????o dos m??dulos para cada membro:";
      }
      else
      {
        result+="os m??dulos a que pertencem:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all modules (Fortran).
     */
    virtual QCString trModulesIndex()
    { return "??ndice dos M??dulos"; }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trModule(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Modulo" : "modulo"));
      if (!singular)  result+="s";
      return result;
    }
    /*! This is put at the bottom of a module documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFilesFortran(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Module", " Struct" or " Union"
      // single is true implies a single file
      QCString result="A documenta????o para ";
      switch(compType)
      {
        case ClassDef::Class:      result+="este modulo "; break;
        case ClassDef::Struct:     result+="este tipo "; break;
        case ClassDef::Union:      result+="esta uni??o "; break;
        case ClassDef::Interface:  result+="esta interface "; break;
        case ClassDef::Protocol:   result+="esto protocolo "; break;
        case ClassDef::Category:   result+="esta categoria "; break;
        case ClassDef::Exception:  result+="esta exce????o "; break;
        default: break;
      }

      result+=" foi gerada a partir do";
      if (single)
    	result+=" seguinte ficheiro:";
      else
    	result+="s seguintes ficheiros:";

      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trType(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Tipo" : "tipo"));
      if (!singular)  result+="s";
      return result;
    }
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trSubprogram(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Subprograma" : "subprograma"));
      if (!singular)  result+="s";
      return result;
    }

    /*! C# Type Contraint list */
    virtual QCString trTypeConstraints()
    {
      return "Restri????es do Tipo";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.6.0 (mainly for the new search engine)
//////////////////////////////////////////////////////////////////////////

    /*! directory relation for \a name
     */
    virtual QCString trDirRelation(const QCString &name)
    {
      return "Rela????o " + QCString(name);
    }

    /*! Loading message shown when loading search results */
    virtual QCString trLoading()
    {
      return "Carregando...";
    }

    /*! Label used for search results in the global namespace */
    virtual QCString trGlobalNamespace()
    {
      return "Namespace global";
    }

    /*! Message shown while searching */
    virtual QCString trSearching()
    {
      return "Procurando...";
    }

    /*! Text shown when no search results are found */
    virtual QCString trNoMatches()
    {
      return "Nenhuma entrada encontrada";
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
      return "Ficheiro em "+name;
    }

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the second column mentions the
     *  destination file that is included.
     */
    virtual QCString trIncludesFileIn(const QCString &name)
    {
      return "Inclui ficheiro em "+name;
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
      static const char *days[]   = { "Segunda","Ter??a","Quarta","Quinta","Sexta","S??bado","Domingo" };
      static const char *months[] = { "Janeiro","Fevereiro","Mar??o","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro" };
      QCString sdate;
      sdate.sprintf("%s, %d de %s de %d",days[dayOfWeek-1],day,months[month-1],year);
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
    { return "Refer??ncias Bibliogr??ficas"; }

    /*! Text for copyright paragraph */
    virtual QCString trCopyright()
    {
      // Note: I will left it as is because "Direitos de autor" may not fit
      // in the text.
      return "Copyright";
    }

    /*! Header for the graph showing the directory dependencies */
    virtual QCString trDirDepGraph(const QCString &name)
    { return QCString("Grafo de depend??ncias do direct??rio ")+name+":"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.0
//////////////////////////////////////////////////////////////////////////

    /*! Detail level selector shown for hierarchical indices */
    virtual QCString trDetailLevel()
    { return "n??vel de detalhes"; }

    /*! Section header for list of template parameters */
    virtual QCString trTemplateParameters()
    { return "Par??metros de template"; }

    /*! Used in dot graph when UML_LOOK is enabled and there are many fields */
    virtual QCString trAndMore(const QCString &number)
    { return "e "+number+" mais..."; }

    /*! Used file list for a Java enum */
    virtual QCString trEnumGeneratedFromFiles(bool single)
    { QCString result = "A documenta????o para esta enumera????o foi gerada a partir";
      if (single) {
        result += "do seguinte ficheiro:";
      } else {
        result += "dos seguintes ficheiros:";
      }
      return result;
    }

    /*! Header of a Java enum page (Java enums are represented as classes). */
    virtual QCString trEnumReference(const QCString &name)
    {
      QCString result = "Refer??ncia da enumera????o ";
      return result + name;
    }

    /*! Used for a section containing inherited members */
    virtual QCString trInheritedFrom(const QCString &members,const QCString &what)
    { return QCString(members)+" herdados de "+what; }

    /*! Header of the sections with inherited members specific for the
     *  base class(es)
     */
    virtual QCString trAdditionalInheritedMembers()
    { return "Outros membros herdados"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a tooltip for the toggle button that appears in the
     *  navigation tree in the HTML output when GENERATE_TREEVIEW is
     *  enabled. This tooltip explains the meaning of the button.
     */
    virtual QCString trPanelSynchronisationTooltip(bool enable)
    {
      QCString opt = enable ? "ativar" : "desativar";
      return "clique para "+opt+" a sincroniza????o do painel";
    }

    /*! Used in a method of an Objective-C class that is declared in a
     *  a category. Note that the @1 marker is required and is replaced
     *  by a link.
     */
    virtual QCString trProvidedByCategory()
    {
      return "Provido pela categoria @0.";
    }

    /*! Used in a method of an Objective-C category that extends a class.
     *  Note that the @1 marker is required and is replaced by a link to
     *  the class method.
     */
    virtual QCString trExtendsClass()
    {
      return "estende a classe @0.";
    }

    /*! Used as the header of a list of class methods in Objective-C.
     *  These are similar to static public member functions in C++.
     */
    virtual QCString trClassMethods()
    {
      return "M??todos de classe";
    }

    /*! Used as the header of a list of instance methods in Objective-C.
     *  These are similar to public member functions in C++.
     */
    virtual QCString trInstanceMethods()
    {
      return "M??todos de inst??ncia";
    }

    /*! Used as the header of the member functions of an Objective-C class.
     */
    virtual QCString trMethodDocumentation()
    {
      return "Documenta????o do m??todo";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.4
//////////////////////////////////////////////////////////////////////////

    /** old style UNO IDL services: implemented interfaces */
    virtual QCString trInterfaces()
    { return "Interfaces Exportadas"; }

    /** old style UNO IDL services: inherited services */
    virtual QCString trServices()
    { return "Servi??os Inclu??dos"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroups()
    { return "Grupos de Constantes"; }

    /** UNO IDL constant groups */
    virtual QCString trConstantGroupReference(const QCString &namespaceName)
    {
      QCString result = "Refer??ncia do grupo de constantes ";
      result += namespaceName;
      return result;
    }

    /** UNO IDL service page title */
    virtual QCString trServiceReference(const QCString &sName)
    {
      QCString result = "Refer??ncia do servi??o ";
      result += sName;
      return result;
    }

    /** UNO IDL singleton page title */
    virtual QCString trSingletonReference(const QCString &sName)
    {
      QCString result = "Refer??ncia do Singleton ";
      result += sName;
      return result;
    }

    /** UNO IDL service page */
    virtual QCString trServiceGeneratedFromFiles(bool single)
    {
      // single is true implies a single file
      QCString result="A documenta????o para este servi??o "
                                "foi gerada a partir ";
      if (single) {
        result+="do seguinte ficheiro:";
      } else {
        result+="dos: seguintes ficheiros:";
      }
      return result;
    }

    /** UNO IDL singleton page */
    virtual QCString trSingletonGeneratedFromFiles(bool single)
    {
      // single is true implies a single file
      QCString result="A documenta????o para este singleton "
                                "foi gerada a partir ";
      if (single) {
        result+="do seguinte ficheiro:";
      } else {
        result+="dos: seguintes ficheiros:";
      }

      return result;
    }

    //////////////////////////////////////////////////////////////////////////
    // new since 1.8.15
    //////////////////////////////////////////////////////////////////////////

    /** VHDL design unit hierarchy */
    virtual QCString trDesignUnitHierarchy()
    { return "Hierarquia da Unidade de Design"; }
    /** VHDL design unit list */
    virtual QCString trDesignUnitList()
    { return "Lista de Unidades de Design"; }
    /** VHDL design unit members */
    virtual QCString trDesignUnitMembers()
    { return "Membros da Unidade de Design"; }
    /** VHDL design unit list description */
    virtual QCString trDesignUnitListDescription()
    {
        return "Esta ?? uma lista de todos os membros de unidades de design "
        		"com liga????es para as entidades ??s quais pertencem:";
    }
    /** VHDL design unit index */
    virtual QCString trDesignUnitIndex()
    { return "??ndice de Unidades de Design"; }
    /** VHDL design units */
    virtual QCString trDesignUnits()
    { return "Unidades de Design"; }
    /** VHDL functions/procedures/processes */
    virtual QCString trFunctionAndProc()
    { return "Fun????es/Procedimentos/Processos"; }
    /** VHDL type */
    virtual QCString trVhdlType(uint64 type,bool single)
    {
      switch(type)
      {
        case VhdlDocGen::LIBRARY:
          if (single) return "Biblioteca";
          else        return "Bibliotecas";
        case VhdlDocGen::PACKAGE:
          if (single) return "Pacote";
          else        return "Pacotes";
        case VhdlDocGen::SIGNAL:
          if (single) return "Sinal";
          else        return "Sinais";
        case VhdlDocGen::COMPONENT:
          if (single) return "Componente";
          else        return "Componentes";
        case VhdlDocGen::CONSTANT:
          if (single) return "Constante";
          else        return "Constantes";
        case VhdlDocGen::ENTITY:
          if (single) return "Entidade";
          else        return "Entidades";
        case VhdlDocGen::TYPE:
          if (single) return "Tipo";
          else        return "Tipos";
        case VhdlDocGen::SUBTYPE:
          if (single) return "Subtipo";
          else        return "Subtipos";
        case VhdlDocGen::FUNCTION:
          if (single) return "Fun????o";
          else        return "Fun????es";
        case VhdlDocGen::RECORD:
          if (single) return "Registro";
          else        return "Registros";
        case VhdlDocGen::PROCEDURE:
          if (single) return "Procedimento";
          else        return "Procedimentos";
        case VhdlDocGen::ARCHITECTURE:
          if (single) return "Arquitetura";
          else        return "Arquiteturas";
        case VhdlDocGen::ATTRIBUTE:
          if (single) return "Atributo";
          else        return "Atributos";
        case VhdlDocGen::PROCESS:
          if (single) return "Processo";
          else        return "Processos";
        case VhdlDocGen::PORT:
          if (single) return "Porta";
          else        return "Portas";
        case VhdlDocGen::USE:
          if (single) return "cl??usula de uso";
          else        return "cl??usulas de uso";
        case VhdlDocGen::GENERIC:
          if (single) return "Generico";
          else        return "Genericos";
        case VhdlDocGen::PACKAGE_BODY:
          return "Corpo do Pacote";
        case VhdlDocGen::UNITS:
          return "Unidades";
        case VhdlDocGen::SHAREDVARIABLE:
          if (single) return "Vari??vel Compartilhada";
          else        return "Vari??veis Compartilhadas";
        case VhdlDocGen::VFILE:
          if (single) return "Ficheiro";
          else        return "Ficheiros";
        case VhdlDocGen::GROUP:
          if (single) return "Grupo";
          else        return "Grupos";
        case VhdlDocGen::INSTANTIATION:
          if (single) return "Inst??ncia";
          else        return "Inst??ncias";
        case VhdlDocGen::ALIAS:
          if (single) return "Apelido";
          else        return "Apelidos";
        case VhdlDocGen::CONFIG:
          if (single) return "Configura????o";
          else        return "Configura????es";
        case VhdlDocGen::MISCELLANEOUS:
          return "Outros"; // Is this correct for VHDL?
        case VhdlDocGen::UCF_CONST:
          return "Restri????es";
        default:
          return "Classe";
      }
    }
    virtual QCString trCustomReference(const QCString &name)
    { return "Refer??ncia de " + QCString(name); }

    /* Slice */
    virtual QCString trConstants()
    {
        return "Constantes";
    }
    virtual QCString trConstantDocumentation()
    {
        return "Constantes";
    }
    virtual QCString trSequences()
    {
        return "Sequ??ncias";
    }
    virtual QCString trSequenceDocumentation()
    {
        return "Sequ??ncias";
    }
    virtual QCString trDictionaries()
    {
        return "Dicion??rios";
    }
    virtual QCString trDictionaryDocumentation()
    {
        return "Dicion??rios";
    }
    virtual QCString trSliceInterfaces()
    {
        return "Interfaces";
    }
    virtual QCString trInterfaceIndex()
    {
        return "??ndice de Interfaces";
    }
    virtual QCString trInterfaceList()
    {
        return "Lista de Interfaces";
    }
    virtual QCString trInterfaceListDescription()
    {
        return "Estas s??o as interfaces com suas respectivas descri????es:";
    }
    virtual QCString trInterfaceHierarchy()
    {
        return "Hierarquia de Interfaces";
    }
    virtual QCString trInterfaceHierarchyDescription()
    {
        return "Esta ?? a lista parcialmente ordenadas de heran??as:";
    }
    virtual QCString trInterfaceDocumentation()
    {
        return "Interfaces";
    }
    virtual QCString trStructs()
    {
        return "Estruturas";
    }
    virtual QCString trStructIndex()
    {
        return "??ndice de Estruturas";
    }
    virtual QCString trStructList()
    {
        return "Lista de Estruturas";
    }
    virtual QCString trStructListDescription()
    {
        return "Estas s??o as estruturas com suas respectivas descri????es:";
    }
    virtual QCString trStructDocumentation()
    {
        return "Estruturas";
    }
    virtual QCString trExceptionIndex()
    {
        return "??ndice the Exce????es";
    }
    virtual QCString trExceptionList()
    {
        return "Lista de Exce????es";
    }
    virtual QCString trExceptionListDescription()
    {
        return "Estas s??o as exce????es com suas respectivas descri????es:";
    }
    virtual QCString trExceptionHierarchy()
    {
        return "Hierarquia de Exce????es";
    }
    virtual QCString trExceptionHierarchyDescription()
    {
        return "Esta ?? a lista parcialmente ordenadas de heran??as:";
    }
    virtual QCString trExceptionDocumentation()
    {
        return "Exce????es";
    }
    virtual QCString trCompoundReferenceSlice(const QCString &clName, ClassDef::CompoundType compType, bool isLocal)
    {
      QCString result="Refer??ncia ";
      switch(compType)
      {
        case ClassDef::Class:      result+="da Classe "; break;
        case ClassDef::Struct:     result+="da Estrutura "; break;
        case ClassDef::Union:      result+="da Uni??o "; break;
        case ClassDef::Interface:  result+="da Interface "; break;
        case ClassDef::Protocol:   result+="do Protocolo "; break;
        case ClassDef::Category:   result+="da Categoria "; break;
        case ClassDef::Exception:  result+="da Exce????o "; break;
        default: break;
      }
      if (isLocal) result+="Local ";
      result+= clName;
      return result;
    }
    virtual QCString trOperations()
    {
        return "Opera????es";
    }
    virtual QCString trOperationDocumentation()
    {
        return "Opera????es";
    }
    virtual QCString trDataMembers()
    {
        return "Dados Membros";
    }
    virtual QCString trDataMemberDocumentation()
    {
        return "Dados Membros";
    }

    //////////////////////////////////////////////////////////////////////////
    // new since 1.8.19
    //////////////////////////////////////////////////////////////////////////

    /** VHDL design unit documentation */
	virtual QCString trDesignUnitDocumentation()
	{
	    return "Documenta????o da Unidade de Projeto";
    }


	//////////////////////////////////////////////////////////////////////////
	// new since 1.9.2
	//////////////////////////////////////////////////////////////////////////
	/** C++20 concept */
	virtual QCString trConcept(bool first_capital, bool singular)
	{
	  QCString result((first_capital ? "Conceito" : "conceito"));
	  if (!singular) result+="s";
	  return result;
	}
	/*! used as the title of the HTML page of a C++20 concept page */
	virtual QCString trConceptReference(const QCString &conceptName)
	{
	  QCString result= "Refer??ncia do Conceito ";
	  result+=conceptName;
	  return result;
	}

	/*! used as the title of page containing all the index of all concepts. */
	virtual QCString trConceptList()
	{ return "Lista de Conceitos"; }

	/*! used as the title of chapter containing the index listing all concepts. */
	virtual QCString trConceptIndex()
	{ return "??ndice de Conceitos"; }

	/*! used as the title of chapter containing all information about concepts. */
	virtual QCString trConceptDocumentation()
	{ return "Documenta????o do Conceito"; }

	/*! used as an introduction to the concept list */
	virtual QCString trConceptListDescription(bool extractAll)
	{
	  QCString result="Esta ?? a lista de todos os conceitos ";
	  if (!extractAll) result+="documentados ";
	  result+="com suas respectivas descri????es:";
	  return result;
	}

	/*! used to introduce the definition of the C++20 concept */
	virtual QCString trConceptDefinition()
	{
	  return "Defini????o de conceito";
	}
};

#endif
