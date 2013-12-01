##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=t1b1dataprocessor
ConfigurationName      :=Debug
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
WorkspacePath          := "/home/mark/t1b1workspace"
ProjectPath            := "/home/mark/t1b1workspace/t1b1dataprocessor"
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mark
Date                   :=12/01/2013
CodeLitePath           :="/home/mark/.codelite"
LinkerName             :=g++
ArchiveTool            :=ar rcus
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
CompilerName           :=g++
C_CompilerName         :=gcc
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
MakeDirCommand         :=mkdir -p
CmpOptions             := -g -std=c++0x $(Preprocessors)
LinkOptions            :=  
IncludePath            :=  "$(IncludeSwitch)." "$(IncludeSwitch)." 
RcIncludePath          :=
Libs                   :=$(LibrarySwitch)mysqlcppconn 
LibPath                := "$(LibraryPathSwitch)/usr/lib" 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/climber$(ObjectSuffix) $(IntermediateDirectory)/databaseconnector$(ObjectSuffix) $(IntermediateDirectory)/enrollment$(ObjectSuffix) $(IntermediateDirectory)/scorecard$(ObjectSuffix) $(IntermediateDirectory)/enrolledclimber$(ObjectSuffix) $(IntermediateDirectory)/boulderscore$(ObjectSuffix) $(IntermediateDirectory)/primitivescore$(ObjectSuffix) $(IntermediateDirectory)/totalscore$(ObjectSuffix) $(IntermediateDirectory)/primitivetotalscore$(ObjectSuffix) \
	

##
## Main Build Targets 
##
all: $(OutputFile)

$(OutputFile): makeDirStep $(Objects)
	@$(MakeDirCommand) $(@D)
	$(LinkerName) $(OutputSwitch)$(OutputFile) $(Objects) $(LibPath) $(Libs) $(LinkOptions)

makeDirStep:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/main.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/main.cpp"

$(IntermediateDirectory)/climber$(ObjectSuffix): climber.cpp $(IntermediateDirectory)/climber$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/climber.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/climber$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/climber$(DependSuffix): climber.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/climber$(ObjectSuffix) -MF$(IntermediateDirectory)/climber$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/climber.cpp"

$(IntermediateDirectory)/climber$(PreprocessSuffix): climber.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/climber$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/climber.cpp"

$(IntermediateDirectory)/databaseconnector$(ObjectSuffix): databaseconnector.cpp $(IntermediateDirectory)/databaseconnector$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/databaseconnector.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/databaseconnector$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/databaseconnector$(DependSuffix): databaseconnector.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/databaseconnector$(ObjectSuffix) -MF$(IntermediateDirectory)/databaseconnector$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/databaseconnector.cpp"

$(IntermediateDirectory)/databaseconnector$(PreprocessSuffix): databaseconnector.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/databaseconnector$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/databaseconnector.cpp"

$(IntermediateDirectory)/enrollment$(ObjectSuffix): enrollment.cpp $(IntermediateDirectory)/enrollment$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/enrollment.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/enrollment$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/enrollment$(DependSuffix): enrollment.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/enrollment$(ObjectSuffix) -MF$(IntermediateDirectory)/enrollment$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/enrollment.cpp"

$(IntermediateDirectory)/enrollment$(PreprocessSuffix): enrollment.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/enrollment$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/enrollment.cpp"

$(IntermediateDirectory)/scorecard$(ObjectSuffix): scorecard.cpp $(IntermediateDirectory)/scorecard$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/scorecard.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/scorecard$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/scorecard$(DependSuffix): scorecard.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/scorecard$(ObjectSuffix) -MF$(IntermediateDirectory)/scorecard$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/scorecard.cpp"

$(IntermediateDirectory)/scorecard$(PreprocessSuffix): scorecard.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/scorecard$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/scorecard.cpp"

$(IntermediateDirectory)/enrolledclimber$(ObjectSuffix): enrolledclimber.cpp $(IntermediateDirectory)/enrolledclimber$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/enrolledclimber.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/enrolledclimber$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/enrolledclimber$(DependSuffix): enrolledclimber.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/enrolledclimber$(ObjectSuffix) -MF$(IntermediateDirectory)/enrolledclimber$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/enrolledclimber.cpp"

$(IntermediateDirectory)/enrolledclimber$(PreprocessSuffix): enrolledclimber.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/enrolledclimber$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/enrolledclimber.cpp"

$(IntermediateDirectory)/boulderscore$(ObjectSuffix): boulderscore.cpp $(IntermediateDirectory)/boulderscore$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/boulderscore.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/boulderscore$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/boulderscore$(DependSuffix): boulderscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/boulderscore$(ObjectSuffix) -MF$(IntermediateDirectory)/boulderscore$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/boulderscore.cpp"

$(IntermediateDirectory)/boulderscore$(PreprocessSuffix): boulderscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/boulderscore$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/boulderscore.cpp"

$(IntermediateDirectory)/primitivescore$(ObjectSuffix): primitivescore.cpp $(IntermediateDirectory)/primitivescore$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/primitivescore.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/primitivescore$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/primitivescore$(DependSuffix): primitivescore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/primitivescore$(ObjectSuffix) -MF$(IntermediateDirectory)/primitivescore$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/primitivescore.cpp"

$(IntermediateDirectory)/primitivescore$(PreprocessSuffix): primitivescore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/primitivescore$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/primitivescore.cpp"

$(IntermediateDirectory)/totalscore$(ObjectSuffix): totalscore.cpp $(IntermediateDirectory)/totalscore$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/totalscore.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/totalscore$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/totalscore$(DependSuffix): totalscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/totalscore$(ObjectSuffix) -MF$(IntermediateDirectory)/totalscore$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/totalscore.cpp"

$(IntermediateDirectory)/totalscore$(PreprocessSuffix): totalscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/totalscore$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/totalscore.cpp"

$(IntermediateDirectory)/primitivetotalscore$(ObjectSuffix): primitivetotalscore.cpp $(IntermediateDirectory)/primitivetotalscore$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/mark/t1b1workspace/t1b1dataprocessor/primitivetotalscore.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/primitivetotalscore$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/primitivetotalscore$(DependSuffix): primitivetotalscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/primitivetotalscore$(ObjectSuffix) -MF$(IntermediateDirectory)/primitivetotalscore$(DependSuffix) -MM "/home/mark/t1b1workspace/t1b1dataprocessor/primitivetotalscore.cpp"

$(IntermediateDirectory)/primitivetotalscore$(PreprocessSuffix): primitivetotalscore.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/primitivetotalscore$(PreprocessSuffix) "/home/mark/t1b1workspace/t1b1dataprocessor/primitivetotalscore.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/climber$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/climber$(DependSuffix)
	$(RM) $(IntermediateDirectory)/climber$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/databaseconnector$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/databaseconnector$(DependSuffix)
	$(RM) $(IntermediateDirectory)/databaseconnector$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/enrollment$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/enrollment$(DependSuffix)
	$(RM) $(IntermediateDirectory)/enrollment$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/scorecard$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/scorecard$(DependSuffix)
	$(RM) $(IntermediateDirectory)/scorecard$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/enrolledclimber$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/enrolledclimber$(DependSuffix)
	$(RM) $(IntermediateDirectory)/enrolledclimber$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/boulderscore$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/boulderscore$(DependSuffix)
	$(RM) $(IntermediateDirectory)/boulderscore$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/primitivescore$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/primitivescore$(DependSuffix)
	$(RM) $(IntermediateDirectory)/primitivescore$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/totalscore$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/totalscore$(DependSuffix)
	$(RM) $(IntermediateDirectory)/totalscore$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/primitivetotalscore$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/primitivetotalscore$(DependSuffix)
	$(RM) $(IntermediateDirectory)/primitivetotalscore$(PreprocessSuffix)
	$(RM) $(OutputFile)


