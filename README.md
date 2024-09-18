<HTML lang="en">
  <Body>
    <Main>
    <p>
#FACT - FRENZY - Multiplayer Quiz Game
    </p>

    <p>
Developed for Intermediate Programming (CSE 1320)
    </p>
Team Members:

-Keven Olvera Contreraz (1001809730)
-Emma Slonaker (1002082749)
-Gurpreet Banwait (1002113712)
-Hilary Ha (1002142734)
Mentor: Marika Apostolova
TA: Arjun Dahal

<section>
  Table of Contents
  <ul>
    <li>*Introduction*</li>
    <li>*Current Systems*</li>
    <li>*Proposed Model*</li>
    <li>*Program Design*</li>
    <li>*Testing*</li>
    <li>*Conclusion*</li>
    <li>*References*</li>
  </ul>
</section>

Fact Frenzy is a multiplayer quiz game with four categories: History, Geography, Entertainment, and Food. Players can choose to play solo or compete with another player. The game features five difficulty levels ranging from very easy (100 points) to very hard (500 points). Each player takes turns answering questions, earning points for correct answers, and the game concludes after 10 rounds.

Current Systems
Fact Frenzy is inspired by the game Jeopardy. Similar to Jeopardy, players select categories and difficulty levels to answer questions. Points are awarded for correct answers, and the game operates in a pass-and-play style for multiple players.

Proposed Model
Game Structure:

#Categories: History, Geography, Entertainment, Food
Difficulty levels: Very Easy, Easy, Medium, Hard, Very Hard
20 total questions (5 per category, 1 for each difficulty level)
Pass-and-play multiplayer for up to 2 players

Program Design
Fact Frenzy is built using C with the following features:

Two primary structures: Question and Player
Questions are stored in arrays, one for each category
Players earn points based on the difficulty of correctly answered questions
Six functions control game logic: four category functions, one to display player points, and one to check for reused questions

Key Modules:
<ol>
<li>Menu Screen: Players choose categories and difficulty levels</li>
<li>Question Logic: Players answer questions, and points are awarded for correct answers</li>
<li>Player Struct: Stores player names and points</li>
<li>Question Struct: Stores questions and whether they’ve been answered</li>
</ol>
Testing
The game was thoroughly tested with multiple cases, including alternating turns for multiplayer and ensuring questions were not reused. Here are some significant fixes during the testing phase:

Multiplayer turn alternation fixed with nested loops
Questions being skipped due to incorrect input handling were resolved
Incorrect point awarding logic was corrected

Test Log:
11/06/2023: Fixed multiplayer turn alternation issue
11/07/2023: Implemented check for previously answered questions
11/10/2023: Resolved points being awarded for incorrect answers and input handling


Program Weaknesses:
<ul>
<li>Limited to 10 rounds per game</li>
<li>Only allows up to 2 players in a single game</li>
<li>No graphical interface, leading to a text-heavy experience</li>
</ul>

Program Strengths:
<ul>
<li>Robust input validation and error checking</li>
<li>Flexible loop structure allows replaying with different settings</li>
</ul>

Future Enhancements:
<ul>
<li>Add a graphical user interface for better usability</li>
<li>Implement a system to randomize questions for replayability</li>
<li>Expand multiplayer capabilities beyond 2 players</li>
<li>References</li>
<li>State Cookie of Texas Trivia</li>
<li>History Trivia Questions</li>
<li>Geography Trivia</li>
<li>Barbenheimer Box Office</li>
</ul>
    </Main>
  </Body>
</HTML>
