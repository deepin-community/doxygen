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
 * Polish translation was updated to version 1.3.9 by
 * Piotr Kaminski (Piotr.Kaminski@ctm.gdynia.pl)
 * Polish translation was updated since version 1.4.6 by
 * Krzysztof Kral (krzysztof.kral@gmail.com)
 */

#ifndef TRANSLATOR_PL_H
#define TRANSLATOR_PL_H

class TranslatorPolish : public TranslatorAdapter_1_8_2
{
  public:

    // --- Language control methods -------------------

    /*! Used for identification of the language. May resemble
     * the string returned by latexBabelPackage(), but it is not used
     * for the same purpose. The identification should not be translated.
     * It should be replaced by the name of the language in English
     * (e.g. Czech, Japanese, Russian, etc.). It should be equal to
     * the identification in language.h.
     */
    QCString idLanguage()
    { return "polish"; }
    /*! Used to get the command(s) for the language support. This method
     *  was designed for languages which do not prefer babel package.
     *  If this methods returns empty string, then the latexBabelPackage()
     *  method is used to generate the command for using the babel package.
     */
    QCString latexLanguageSupportCommand()
    {
      return "\\usepackage[polish]{babel}\n"
             "\\let\\lll\\undefined\n"; /* to overcome problems with the <<<
                                           symbol as defined in the amssymb
                                           package, and the Polish symbol
                                           "Latin Small Letter L With Stroke"
                                           &lstrok; or &#322; or &#x0142;
                                           We take the amssymb symbol as leading.
                                         */
    }

    virtual QCString trISOLang()
    {
      return "pl";
    }
    virtual QCString getLanguageString()
    {
      return "0x415 Polish";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Funkcje powi??zane"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Zauwa??, ??e to nie s?? metody klas.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "Opis szczeg????owy"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Dokumentacja sk??adowych definicji typu"; }

    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Dokumentacja sk??adowych wyliczanych"; }

    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Dokumentacja funkcji sk??adowych"; }

    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Dokumentacja p??l";
      }
      else
      {
        return "Dokumentacja atrybut??w sk??adowych";
      }
    }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "Wi??cej..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Lista wszystkich sk??adowych"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Lista sk??adowych"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "To jest kompletna lista sk??adowych dla "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return ", uwzgl??dniaj??ca wszystkie dziedziczone sk??adowe."; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const QCString &s)
    { QCString result="Wygenerowano automatycznie z kodu ??r??d??owego programem Doxygen";
      if (!s.isEmpty()) result+=" dla "+s;
      result+=".";
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "nazwa wyliczenia"; }

    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "warto???? wyliczenia"; }

    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "zdefiniowana w"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \\group command).
     */
    QCString trModules()
    { return "Modu??y"; }

    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Hierarchia klas"; }

    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Struktury danych";
      }
      else
      {
        return "Lista klas";
      }
    }

    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "Lista plik??w"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Pola danych";
      }
      else
      {
        return "Sk??adowe klas";
      }
    }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Globalne";
      }
      else
      {
        return "Sk??adowe plik??w";
      }
    }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "Dodatkowe strony"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "Przyk??ady"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Szukaj"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Ta lista dziedziczenia posortowana jest z grubsza, "
             "cho?? nie ca??kowicie, alfabetycznie:";
    }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="plik??w z ich kr??tkimi opisami:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    {

      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Tutaj znajduj?? si?? struktury danych wraz z ich kr??tkimi opisami:";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_SLICE))
      {
        return "Tutaj znajduj?? si?? klasy wraz z ich kr??tkimi opisami:";
      }
      else
      {
        return "Tutaj znajduj?? si?? klasy, struktury, "
             "unie i interfejsy wraz z ich kr??tkimi opisami:";
      }
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll)
      {
        result+="udokumentowanych ";
      }
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="p??l struktur i unii";
      }
      else
      {
        result+="sk??adowych";
      }
      result+=" wraz z odno??nikami do ";
      if (!extractAll)
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="dokumentacji struktur/unii dla ka??dego pola:";
        }
        else
        {
          result+="dokumentacji klas dla ka??dej sk??adowej:";
        }
      }
      else
      {
        if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
        {
          result+="struktur/unii, do kt??rych dane pole nale??y:";
        }
        else
        {
          result+="klas, do kt??rych dana sk??adowa nale??y:";
        }
      }
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        result+="funkcji, zmiennych, makr, wylicze?? i definicji typ??w";
      }
      else
      {
        result+="sk??adowych plik??w";
      }
      result+=" wraz z odno??nikami do ";
      if (extractAll)
        result+="plik??w, do kt??rych one nale????:";
      else
        result+="dokumentacji:";
      return result;
    }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Tutaj znajduje si?? lista wszystkich przyk??ad??w:"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Tutaj znajduje si?? lista wszystkich stron dokumentacji:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Tutaj znajduje si?? lista wszystkich grup:"; }

    // index titles (the project name is prepended for these)


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Dokumentacja"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "Indeks grup"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "Indeks hierarchiczny"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    QCString trCompoundIndex()
    {
     if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Indeks struktur danych";
      }
      else
      {
        return "Indeks klas";
      }
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex()
    { return "Indeks plik??w"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Dokumentacja grup"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Dokumentacja struktur danych";
      }
      else if (Config_getBool(OPTIMIZE_OUTPUT_VHDL))
      {
          return trDesignUnitDocumentation();
      }
      else
      {
        return "Dokumentacja klas";
      }
    }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "Dokumentacja plik??w"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "Dokumentacja przyk??ad??w"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Podr??cznik"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    QCString trDefines()
    { return "Definicje"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "Definicje typ??w"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Wyliczenia"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "Funkcje"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trVariables()
    { return "Zmienne"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "Warto??ci wylicze??"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Dokumentacja definicji"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Dokumentacja definicji typ??w"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Dokumentacja typ??w wyliczanych"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "Dokumentacja funkcji"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "Dokumentacja zmiennych"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Struktury danych";
      }
      else
      {
        return "Komponenty";
      }
    }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    QCString trGeneratedAt(const QCString &date,const QCString &projName)
    {
      QCString result="Wygenerowano "+date;
      if (!projName.isEmpty()) result+=" dla "+projName;
      result+=" programem";
      return result;
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const QCString &clName)
    {
      return "Diagram dziedziczenia dla "+clName;
    }

    /*! this text is generated when the \\warning command is used. */
    QCString trWarning()
    { return "Ostrze??enie"; }

    /*! this text is generated when the \\version command is used. */
    QCString trVersion()
    { return "Wersja"; }

    /*! this text is generated when the \\date command is used. */
    QCString trDate()
    { return "Data"; }

    /*! this text is generated when the \\return command is used. */
    QCString trReturns()
    { return "Zwraca"; }

    /*! this text is generated when the \\sa command is used. */
    QCString trSeeAlso()
    { return "Zobacz r??wnie??"; }

    /*! this text is generated when the \\param command is used. */
    QCString trParameters()
    { return "Parametry"; }

    /*! this text is generated when the \\exception command is used. */
    QCString trExceptions()
    { return "Wyj??tki"; }

    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "Wygenerowano przez"; }

    // new since 0.49-990307

    /*! used as the title of page containing all the index of all namespaces. */
    QCString trNamespaceList()
    { return "Lista przestrzeni nazw"; }

    /*! used as an introduction to the namespace list */
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Tutaj znajduj?? si?? wszystkie ";
      if (!extractAll) result+="udokumentowane ";
      result+="przestrzenie nazw wraz z ich kr??tkimi opisami:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    QCString trFriends()
    { return "Przyjaciele"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    QCString trRelatedFunctionDocumentation()
    { return "Dokumentacja przyjaci???? i funkcji zwi??zanych"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    QCString trCompoundReference(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result="Dokumentacja";
      if (isTemplate) result+=" szablonu";
      switch(compType)
      {
        case ClassDef::Class:      result+=" klasy "; break;
        case ClassDef::Struct:     result+=" struktury "; break;
        case ClassDef::Union:      result+=" unii "; break;
        case ClassDef::Interface:  result+=" interfejsu "; break;
        case ClassDef::Protocol:   result+=" protoko??u "; break;
        case ClassDef::Category:   result+=" kategorii "; break;
        case ClassDef::Exception:  result+=" wyj??tku "; break;
        default: break;
      }
      result+=clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    QCString trFileReference(const QCString &fileName)
    {
      QCString result="Dokumentacja pliku ";
      result+=fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    QCString trNamespaceReference(const QCString &namespaceName)
    {
      QCString result="Dokumentacja przestrzeni nazw ";
      result+=namespaceName;
      return result;
    }

    /* these are for the member sections of a class, struct or union */
    QCString trPublicMembers()
    { return "Metody publiczne"; }
    QCString trPublicSlots()
    { return "Sloty publiczne"; }
    QCString trSignals()
    { return "Sygna??y"; }
    QCString trStaticPublicMembers()
    { return "Statyczne metody publiczne"; }
    QCString trProtectedMembers()
    { return "Metody chronione"; }
    QCString trProtectedSlots()
    { return "Sloty chronione"; }
    QCString trStaticProtectedMembers()
    { return "Statyczne metody chronione"; }
    QCString trPrivateMembers()
    { return "Metody prywatne"; }
    QCString trPrivateSlots()
    { return "Sloty prywatne"; }
    QCString trStaticPrivateMembers()
    { return "Statyczne metody prywatne"; }

    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    QCString trWriteList(int numEntries)
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
            result+=" i ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritsList(int numEntries)
    {
      return "Dziedziczy "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritedByList(int numEntries)
    {
      return "Dziedziczona przez "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementowana z "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementowana w "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    QCString trNamespaceMembers()
    { return "Sk??adowe przestrzeni nazw"; }

    /*! This is an introduction to the page with all namespace members */
    QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="sk??adowych wraz z odno??nikami do ";
      if (extractAll)
        result+="dokumentacji przestrzeni nazw dla ka??dej sk??adowej:";
      else
        result+="przestrzeni nazw do kt??rych sk??adowe te nale????:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    QCString trNamespaceIndex()
    { return "Indeks przestrzeni nazw"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    QCString trNamespaceDocumentation()
    { return "Dokumentacja przestrzeni nazw"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    QCString trNamespaces()
    { return "Przestrzenie nazw"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result="Dokumentacja dla te";
      switch(compType)
      {
        case ClassDef::Class:      result+="j klasy"; break;
        case ClassDef::Struct:     result+="j struktury"; break;
        case ClassDef::Union:      result+="j unii"; break;
        case ClassDef::Interface:  result+="go interfejsu"; break;
        case ClassDef::Protocol:   result+="go protoko??u"; break;
        case ClassDef::Category:   result+="j kategorii"; break;
        case ClassDef::Exception:  result+="go wyj??tku"; break;
        default: break;
      }
      result+=" zosta??a wygenerowana z plik";
      if (single) result+="u:"; else result+="??w:";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "Zwracane warto??ci"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "Strona g????wna"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "str."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    QCString trDefinedAtLineInSourceFile()
    {
      return "Definicja w linii @0 pliku @1.";
    }
    QCString trDefinedInSourceFile()
    {
      return "Definicja w pliku @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Do wycofania";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const QCString &clName)
    {
      return "Diagram wsp????pracy dla "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const QCString &fName)
    {
      return "Wykres zale??no??ci za????czania dla "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "Dokumentacja konstruktora i destruktora";
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "Id?? do kodu ??r??d??owego tego pliku.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "Id?? do dokumentacji tego pliku.";
    }
    /*! Text for the \\pre command */
    QCString trPrecondition()
    {
      return "Warunek wst??pny";
    }
    /*! Text for the \\post command */
    QCString trPostcondition()
    {
      return "Warunek ko??cowy";
    }
    /*! Text for the \\invariant command */
    QCString trInvariant()
    {
      return "Niezmiennik";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "Warto???? pocz??tkowa:";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "kod ??r??d??owy";
    }
    QCString trGraphicalHierarchy()
    {
      return "Graficzna hierarchia klas";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "Id?? do graficznej hierarchii klas";
    }
    QCString trGotoTextualHierarchy()
    {
      return "Id?? do tekstowej hierarchii klas";
    }
    QCString trPageIndex()
    {
      return "Indeks stron";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    QCString trNote()
    {
      return "Nota";
    }
    QCString trPublicTypes()
    {
      return "Typy publiczne";
    }
    QCString trPublicAttribs()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Pola danych";
      }
      else
      {
        return "Atrybuty publiczne";
      }
    }
    QCString trStaticPublicAttribs()
    {
      return "Statyczne atrybuty publiczne";
    }
    QCString trProtectedTypes()
    {
      return "Typy chronione";
    }
    QCString trProtectedAttribs()
    {
      return "Atrybuty chronione";
    }
    QCString trStaticProtectedAttribs()
    {
      return "Statyczne atrybuty chronione";
    }
    QCString trPrivateTypes()
    {
      return "Typy prywatne";
    }
    QCString trPrivateAttribs()
    {
      return "Atrybuty prywatne";
    }
    QCString trStaticPrivateAttribs()
    {
      return "Statyczne atrybuty prywatne";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    QCString trTodo()
    {
      return "Do zrobienia";
    }
    /*! Used as the header of the todo list */
    QCString trTodoList()
    {
      return "Lista rzeczy do zrobienia";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    QCString trReferencedBy()
    {
      return "Odwo??ania w";
    }
    QCString trRemarks()
    {
      return "Spostrze??enia";
    }
    QCString trAttention()
    {
      return "Uwaga";
    }
    QCString trInclByDepGraph()
    {
      return "Ten wykres pokazuje, kt??re pliki bezpo??rednio lub "
             "po??rednio za????czaj?? ten plik:";
    }
    QCString trSince()
    {
      return "Od";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    QCString trLegendTitle()
    {
      return "Legenda wykresu";
    }
    /*! page explaining how the dot graph's should be interpreted */
    QCString trLegendDocs()
    {
      return
        "Ta strona wyja??nia jak interpretowa?? wykresy, kt??re s?? wygenerowane "
        "przez doxygen.<p>\n"
        "Rozwa?? nast??puj??cy przyk??ad:\n"
        "\\code\n"
        "/*! Klasa Niewidzialna z powodu okrojenia */\n"
        "class Niewidzialna { };\n\n"
        "/*! Klasa Okrojona, relacja dziedziczenia jest ukryta */\n"
        "class Okrojona : public Niewidzialna { };\n\n"
        "/* Klasa nie udokumentowana komentarzami doxygen */\n"
        "class Nieudokumentowana { };\n\n"
        "/*! Klasa, kt??ra jest dziedziczona publicznie */\n"
        "class PublicznaBaza : public Okrojona { };\n\n"
        "/*! Szablon klasy */\n"
        "template<class T> class Templ { };\n\n"
        "/*! Klasa, kt??ra jest dziedziczona przy u??yciu dziedziczenia chronionego */\n"
        "class ChronionaBaza { };\n\n"
        "/*! Klasa, kt??ra jest dziedziczona prywatnie */\n"
        "class PrywatnaBaza { };\n\n"
        "/*! Klasa, kt??ra jest u??yta przez klas?? Dziedziczona */\n"
        "class Uzyta { };\n\n"
        "/*! Superklasa, kt??ra dziedziczy kilka innych klas */\n"
        "class Dziedziczona : public PublicznaBaza,\n"
        "                     protected ChronionaBaza,\n"
        "                     private PrywatnaBaza,\n"
        "                     public Nieudokumentowana,\n"
        "                     public Templ<int>\n"
        "{\n"
        "  private:\n"
        "    Uzyta *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "Rezultat na nast??puj??cym wykresie:"
        "<p><center><img src=\"graph_legend."+getDotImageExtension()+"\"></center></p>\n"
        "<p>\n"
        "Prostok??ty w powy??szym wykresie maj?? nast??puj??ce znaczenie:\n"
        "</p>\n"
        "<ul>\n"
        "<li>Wype??niony czarny prostok??t reprezentuje struktur?? lub klas?? dla "
        "kt??rej zosta?? wygenerowany wykres.</li>\n"
        "<li>Prostok??t z czarn?? obwolut?? oznacza udokumentowan?? struktur?? lub klas??.</li>\n"
        "<li>Prostok??t z szar?? obwolut?? oznacza nieudokumentowan?? struktur?? lub klas??.</li>\n"
        "<li>Prostok??t z czerwon?? obwolut?? oznacza udokumentowan?? struktur?? lub klas?? dla\n"
        "kt??rej nie s?? pokazane wszystkie relacje dziedziczenia/zawierania. Wykres jest "
        "okrojony, je??li nie mie??ci si?? w okre??lonych brzegach.</li>\n"
        "</ul>\n"
        "<p>\n"
        "Strza??ki maj?? nast??puj??ce znaczenie:\n"
        "<p>\n"
        "<ul>\n"
        "<li>Ciemno niebieska strza??ka jest u??ywana do wizualizacji relacji "
        "dziedziczenia publicznego pomi??dzy dwiema klasami.</li>\n"
        "<li>Ciemno zielona strza??ka jest u??ywana dla dziedziczenia chronionego.</li>\n"
        "<li>Ciemno czerwona strza??ka jest u??ywana dla dziedziczenia prywatnego.</li>\n"
        "<li>Fioletowa przerywana strza??ka jest u??ywana je??li klasa jest zawarta "
        "lub u??yta przez inn?? klas??. Strza??ka jest podpisana zmienn??(ymi) "
        "przez kt??re wskazywana klasa lub struktura jest dost??pna. </li>\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    QCString trLegend()
    {
      return "legenda";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a test item */
    QCString trTest()
    {
      return "Test";
    }
    /*! Used as the header of the test list */
    QCString trTestList()
    {
      return "Lista testu";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "W??a??ciwo??ci";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "Dokumentacja w??a??ciwo??ci";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java interfaces in the summary section of Java packages */
    virtual QCString trInterfaces()
    {
      return "Interfejsy";
    }
    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool(OPTIMIZE_OUTPUT_FOR_C))
      {
        return "Struktury Danych";
      }
      else
      {
        return "Klasy";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const QCString &name)
    {
      return "Pakiet "+name;
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Oto lista pakiet??w wraz z kr??tkim opisem (o ile jest dost??pny):";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Pakiety";
    }
    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "Warto????:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "B????d";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Lista b????d??w";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.6-20010422
//////////////////////////////////////////////////////////////////////////

    /*! Used as ansicpg for RTF file */
    virtual QCString trRTFansicp()
    {
      return "1250";
    }

    /*! Used as ansicpg for RTF fcharset */
    virtual QCString trRTFCharSet()
    {
      return "238";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "Indeks";
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trClass(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Klas" : "klas"));
      result+=(singular ? "a" : "y");
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trFile(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Plik" : "plik"));
      if (!singular)  result+="i";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trNamespace(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Przestrze" : "przestrze"));
      result+=(singular ? "??" : "nie");
      result+=" nazw";
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGroup(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Grupa" : "grupa"));
      result+=(singular ? "a" : "y");
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trPage(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Stron" : "stron"));
      result+=(singular ? "a" : "y");
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trMember(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Sk??adow" : "sk??adow"));
      result+=(singular ? "a" : "e");
      return result;
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Global" : "global"));
      result+=(singular ? "ny" : "ne");
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
      result += (singular) ? "r" : "rzy";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Odwo??uje si?? do";
    }


//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////


    virtual QCString trImplementedFromList(int numEntries)
    {
      return "Implementuje "+trWriteList(numEntries)+".";
    }

    virtual QCString trImplementedInList(int numEntries)
    {
      return "Implementowany w "+trWriteList(numEntries)+".";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.16
//////////////////////////////////////////////////////////////////////////

    /*! used in RTF documentation as a heading for the Table
     *  of Contents.
     */
    virtual QCString trRTFTableOfContents()
    {
      return "Spis tre??ci";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.17
//////////////////////////////////////////////////////////////////////////

    /*! Used as the header of the list of item that have been
     *  flagged deprecated
     */
    virtual QCString trDeprecatedList()
    {
      return "Lista element??w do wycofania";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.18
//////////////////////////////////////////////////////////////////////////

    /*! Used as a header for declaration section of the events found in
     * a C# program
     */
    virtual QCString trEvents()
    {
      return "Zdarzenia";
    }
    /*! Header used for the documentation section of a class' events. */
    virtual QCString trEventDocumentation()
    {
      return "Dokumentacja zdarze??";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a heading for a list of Java class types with package scope.
     */
    virtual QCString trPackageTypes()
    {
      return "Typy pakietu";
    }
    /*! Used as a heading for a list of Java class functions with package
     * scope.
     */
    virtual QCString trPackageFunctions()
    {
      return "Funkcje pakietu";
    }
    virtual QCString trPackageMembers()
    {
      return "Sk??adowe pakietu";
    }
    /*! Used as a heading for a list of static Java class functions with
     *  package scope.
     */
    virtual QCString trStaticPackageFunctions()
    {
      return "Statyczne funkcje pakietu";
    }
    /*! Used as a heading for a list of Java class variables with package
     * scope.
     */
    virtual QCString trPackageAttribs()
    {
      return "Atrybuty pakietu";
    }
    /*! Used as a heading for a list of static Java class variables with
     * package scope.
     */
    virtual QCString trStaticPackageAttribs()
    {
      return "Statyczne atrybuty pakietu";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.1
//////////////////////////////////////////////////////////////////////////

    /*! Used in the quick index of a class/file/namespace member list page
     *  to link to the unfiltered list of all members.
     */
    virtual QCString trAll()
    {
      return "Wszystko";
    }
    /*! Put in front of the call graph for a function. */
    virtual QCString trCallGraph()
    {
      return "Oto graf wywo??a?? dla tej funkcji:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.3
//////////////////////////////////////////////////////////////////////////

    /*! This string is used as the title for the page listing the search
     *  results.
     */
    virtual QCString trSearchResultsTitle()
    {
      return "Wyniki szukania";
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
        return "Niestety ??aden dokument nie pasuje do twojego zapytania.";
      }
      else if (numDocuments==1)
      {
        return "Znaleziono <b>1</b> dokument pasuj??cy do twojego zapytania.";
      }
      int count = numDocuments % 10;
      if ((count>=2) && (count<=4))
      {
        return "Znaleziono <b>$num</b> dokumenty pasuj??ce do twojego zapytania. "
               "Najlepiej pasuj??ce dokumenty wy??wietlane s?? na pocz??tku listy.";
      }
      else
      {
        return "Znaleziono <b>$num</b> dokument??w pasuj??cych do twojego zapytania. "
               "Najlepiej pasuj??ce dokumenty wy??wietlane s?? na pocz??tku listy.";
      }
    }
    /*! This string is put before the list of matched words, for each search
     *  result. What follows is the list of words that matched the query.
     */
    virtual QCString trSearchMatches()
    {
      return "Pasuj??ce s??owa:";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.8
//////////////////////////////////////////////////////////////////////////

    /*! This is used in HTML as the title of page with source code for file filename
     */
    virtual QCString trSourceFile(QCString& filename)
    {
      return "Plik ??r??d??owy " + filename;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.3.9
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the name of the chapter containing the directory
     *  hierarchy.
     */
    virtual QCString trDirIndex()
    { return "Struktura katalog??w"; }

    /*! This is used as the name of the chapter containing the documentation
     *  of the directories.
     */
    virtual QCString trDirDocumentation()
    { return "Dokumentacja katalog??w"; }

    /*! This is used as the title of the directory index and also in the
     *  Quick links of a HTML page, to link to the directory hierarchy.
     */
    virtual QCString trDirectories()
    { return "Katalogi"; }


    /*! This returns the title of a directory page. The name of the
     *  directory is passed via \a dirName.
     */
    virtual QCString trDirReference(const QCString &dirName)
    { QCString result="Dokumentacja katalogu "; result+=dirName; return result; }

    /*! This returns the word directory with or without starting capital
     *  (\a first_capital) and in sigular or plural form (\a singular).
     */
    virtual QCString trDir(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Katalog" : "katalog"));
      if (! singular) result+="i";
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
      return "To jest metoda przeci????ona, udost??pniona dla wygody. "
             "R????ni si?? od powy??szej metody tylko zestawem akceptowanych argument??w.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.4.6
//////////////////////////////////////////////////////////////////////////

    /*! This is used to introduce a caller (or called-by) graph */
    virtual QCString trCallerGraph()
    {
      return "Oto graf wywo??ywa?? tej funkcji:";
    }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Dokumentacja wylicze??"; } //TODO check if it is correct translation

//////////////////////////////////////////////////////////////////////////
// new since 1.5.4 (mainly for Fortran)
//////////////////////////////////////////////////////////////////////////

    /*! header that is put before the list of member subprograms (Fortran). */
    virtual QCString trMemberFunctionDocumentationFortran()
    { return "Dokumentacja sk??adowej funkcji/podprogramu"; }

    /*! This is put above each page as a link to the list of annotated data types (Fortran). */
    virtual QCString trCompoundListFortran()
    { return "Lista typ??w danych"; }

    /*! This is put above each page as a link to all members of compounds (Fortran). */
    virtual QCString trCompoundMembersFortran()
    { return "Pola danych"; }

    /*! This is an introduction to the annotated compound list (Fortran). */
    virtual QCString trCompoundListDescriptionFortran()
    { return "Tutaj znajduj?? si?? typy danych z ich kr??tkimi opisami:"; }

    /*! This is an introduction to the page with all data types (Fortran). */
    virtual QCString trCompoundMembersDescriptionFortran(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll)
      {
        result+="udokumentowanych ";
      }
      result+="sk??adowych typ??w danych";
      result+=" wraz z odno??nikami do ";
      if (!extractAll)
      {
         result+="dokumentacji struktury danych dla ka??dej sk??adowej";
      }
      else
      {
         result+="typ??w danych, do kt??rych dana sk??adowa nale??y:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index (Fortran).
     */
    virtual QCString trCompoundIndexFortran()
    { return "Indeks typ??w danych"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all data types (Fortran).
     */
    virtual QCString trTypeDocumentation()
    { return "Dokumentacja typ??w danych"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) subprograms (Fortran).
     */
    virtual QCString trSubprograms()
    { return "Funkcje/podprogramy"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for subprograms (Fortran)
     */
    virtual QCString trSubprogramDocumentation()
    { return "Dokumentacja funkcji/podprogramu"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds (Fortran)
     */
     virtual QCString trDataTypes()
    { return "Typy danych"; }

    /*! used as the title of page containing all the index of all modules (Fortran). */
    virtual QCString trModulesList()
    { return "Lista modu????w"; }

    /*! used as an introduction to the modules list (Fortran) */
    virtual QCString trModulesListDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="modu????w z ich kr??tkimi opisami:";
      return result;
    }

    /*! used as the title of the HTML page of a module/type (Fortran) */
    virtual QCString trCompoundReferenceFortran(const QCString &clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result="Dokumentacja";
      if (isTemplate) result+=" szablonu";
      switch(compType)
      {
        case ClassDef::Class:      result+=" modu??u "; break;
        case ClassDef::Struct:     result+=" typu "; break;
        case ClassDef::Union:      result+=" unii "; break;
        case ClassDef::Interface:  result+=" interfejsu "; break;
        case ClassDef::Protocol:   result+=" protoko??u "; break;
        case ClassDef::Category:   result+=" kategorii "; break;
        case ClassDef::Exception:  result+=" wyj??tku "; break;
        default: break;
      }
      result+=clName;
      return result;
    }
    /*! used as the title of the HTML page of a module (Fortran) */
    virtual QCString trModuleReference(const QCString &namespaceName)
    {
      QCString result="Dokumentacja modu??u ";
      result+=namespaceName;
      return result;
    }

    /*! This is put above each page as a link to all members of modules. (Fortran) */
    virtual QCString trModulesMembers()
    { return "Sk??adowe modu??u"; }

    /*! This is an introduction to the page with all modules members (Fortran) */
    virtual QCString trModulesMemberDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si?? lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="sk??adowych modu????w wraz z odno??nikami do ";
      if (extractAll)
      {
        result+="dokumentacji modu??u dla ka??dej sk??adowej:";
      }
      else
      {
        result+="modu????w, do kt??rych sk??adowe te nale????:";
      }
      return result;
    }

    /*! This is used in LaTeX as the title of the chapter with the
     *  index of all modules (Fortran).
     */
    virtual QCString trModulesIndex()
    { return "Indeks modu??u"; }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names
     *  of the category.
     */
    virtual QCString trModule(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Modu??" : "modu??"));
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
      QCString result="Dokumentacja dla te";
      switch(compType)
      {
        case ClassDef::Class:      result+="go modu??u"; break;
        case ClassDef::Struct:     result+="go typu"; break;
        case ClassDef::Union:      result+="j unii"; break;
        case ClassDef::Interface:  result+="go interfejsu"; break;
        case ClassDef::Protocol:   result+="go protoko??u"; break;
        case ClassDef::Category:   result+="j kategorii"; break;
        case ClassDef::Exception:  result+="go wyj??tku"; break;
        default: break;
      }
      result+=" zosta??a wygenerowana z plik";
      if (single) result+="u:"; else result+="??w:";
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
      return "Wi??zy typ??w"; //TODO check if it is correct translation
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.6.0 (mainly for the new search engine)
//////////////////////////////////////////////////////////////////////////

    /*! directory relation for \a name */
    virtual QCString trDirRelation(const QCString &name)
    {
      return "Relacja "+ QCString(name);
    }

    /*! Loading message shown when loading search results */
    virtual QCString trLoading()
    {
      return "Wczytywanie...";
    }

    /*! Label used for search results in the global namespace */
    virtual QCString trGlobalNamespace()
    {
      return "Globalna przestrze?? nazw";
    }

    /*! Message shown while searching */
    virtual QCString trSearching()
    {
      return "Szukanie...";
    }

    /*! Text shown when no search results are found */
    virtual QCString trNoMatches()
    {
      return "Brak dopasowa??";
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
      return "Plik w "+name;
    }

    /*! when clicking a directory dependency label, a page with a
     *  table is shown. The heading for the second column mentions the
     *  destination file that is included.
     */
    virtual QCString trIncludesFileIn(const QCString &name)
    {
      return "Zawiera plik w "+name;
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
      static const char *days[]   = { "Pn","Wt","??r","Cz","Pt","So","N" };
      static const char *months[] = { "sty","lut","mar","kwi","maj","cze","lip","sie","wrz","pa??","lis","gru" };
      QCString sdate;
      sdate.sprintf("%s, %d %s %d",days[dayOfWeek-1],day,months[month-1],year);
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
    { return "Odwo??ania do literatury"; }

    /*! Text for copyright paragraph */
    virtual QCString trCopyright()
    { return "Copyright"; }

    /*! Header for the graph showing the directory dependencies */
    virtual QCString trDirDepGraph(const QCString &name)
    { return QCString("Wykres zale??no??ci katalogu dla ")+name+":"; }

//////////////////////////////////////////////////////////////////////////
// new since 1.8.0
//////////////////////////////////////////////////////////////////////////

    /*! Detail level selector shown for hierarchical indices */
    virtual QCString trDetailLevel()
    { return "poziom szczeg??????w"; }

    /*! Section header for list of template parameters */
    virtual QCString trTemplateParameters()
    { return "Parametry Szablonu"; }

    /*! Used in dot graph when UML_LOOK is enabled and there are many fields */
    virtual QCString trAndMore(const QCString &number)
    { return "i "+number+" wi??cej..."; }

    /*! Used file list for a Java enum */
    virtual QCString trEnumGeneratedFromFiles(bool single)
    { QCString result = "Dokumentacja dla tego wyliczenia zosta??a wygenerowana z plik";
      if (single) result+="u:"; else result+="??w:";
      return result;
    }

    /*! Header of a Java enum page (Java enums are represented as classes). */
    virtual QCString trEnumReference(const QCString &name)
    { QCString result="Dokumentacja wyliczenia "; result+=name; return result; }

    /*! Used for a section containing inherited members */
    virtual QCString trInheritedFrom(const QCString &members,const QCString &what)
    { return QCString(members)+" dziedziczone z "+what; }

    /*! Header of the sections with inherited members specific for the
     *  base class(es)
     */
    virtual QCString trAdditionalInheritedMembers()
    { return "Dodatkowe Dziedziczone Sk??adowe"; }

};

#endif
