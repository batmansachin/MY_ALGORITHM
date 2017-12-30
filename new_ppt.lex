\documentclass{beamer}
\usetheme{Madrid}
\usecolortheme{beaver}
\usepackage{textpos}
\title{Sentimantal Analysis of Youtube videos}
\author[The author]{\includegraphics[height=1cm,width=4cm]{logo}\\ \vspace{0.2cm}Nitin Swami ,Praveen pawar ,Shubham Nandagawali\\ \vspace{0.3cm}} 
\institute[Inst.]{  \\ \vspace{0.3cm} MIT Academy of Engineering, Alandi(D), Pune.}

\begin{document}

\begin{frame}
\maketitle
\end{frame}

\addtobeamertemplate{frametitle}{}{%
\begin{textblock*}{100mm}(.85\textwidth,-1cm)

\end{textblock*}}

\begin{frame}{Introduction}
\\{What the people think has always been an important for
most of us during the decision-making. Before the world wide web, many of us asked
our friends to recommend an auto mechanic or to explain who
they were planning to vote for in local elections, requested
reference letters regarding job applicants from colleagues, or
consulted Consumer. But the Internet and the Web have now
(among other things) made it possible to find out about the
opinions of what other people think}
\end{frame}

\begin{frame}{Motivation}
\\{An evaluation of the probability that the organization is sufficient motivation to support the
development and implementation of the application with necessary user participation,
resources, training etc. And to avoid fake thumbnail videos.such that the user get the right videos
. }
\end{frame}


\begin{frame}{Objective}
\\{• Sentimental Analysis is a task to identify an text as comments, reviews or message.\newline
• To Implement an algorithm for automatic classiﬁcation of text into positive, negative, neutral ,or negation.\newline
• The main purpose of sentiment analysis, aims to conclude positive sentiments or negative sentiments from given opinionated text. }
\end{frame}



\begin{frame}{Problem Statement}
\\{Sentimental Analysis for Youtube videos}
\end{frame}

\begin{frame}{Challenges identified}
\\{• 1)To Structured the extracted data
   \newline2)Implementation of the SentiWordNet 
   \newline3)Polarity of Algorithm}
\end{frame}



\begin{frame}{Requirement :Open source Software and Hardware}
\\{• Rstudio: RStudio is a free and open-source integrated development environment (IDE) for R,
a programming language for statistical computing and graphics.It is required for the analysis of
the data \newline

\newline• YouTube API : This API is used to get the comments posted on YouTube \newline
\newline• Google Developer API : The Google Play Developer API allows you to perform a number
of publishing and app-management tasks. It includes two components:}
\end{frame}

\begin{frame}{Project plan}
\\{Module 1 The commend are first Extracted from various YouTube Videos and the comments are
extracted using the package YouTube API . Once the comments are extracted  rstudio then the comment is broken down into tokens also called as synnet.\newline
Module 2 includes importing the SentiWordnet library and using this library to give the score to each
token or also called as synnet. The token are given the score on basis of the positivity and the negativity or the neutral nature of the comment \newline
Module 3 includes release of the applications with diﬀerent types of unit testing. In this module, we
will test whether the the result that we have got is actually a positive comment or a negative
comment by comparing the result we have got vs the comment posted on the video.}
\end{frame}


\begin{frame}{Block Diagram}
\begin{figure}
    \centering
    \includegraphics[height=7cm,width=9cm]{Block
    Diagram.jpg}\vspace{1cm}
    \end{figure}
\end{frame}


\begin{frame}{Functional Diagram}
\begin{figure}
    \centering
    \includegraphics[height=7cm,width=9cm]{Functional Diagram.jpg}\vspace{1cm}
    \end{figure}
\end{frame}

\begin{frame}{Feasibility}
\\{ Every project id feaibile with unlimited resources. Feasibility
study is an evaluation of the proposed system regarding its work ability, impact on the organization, ability to meet the user needs and effective use of resources. Thus, when a new application is proposed it normally goes through a feasibility study before it is approved for
development. Feasibility and risk analysis and related in many ways. During the feasibility analysis in this project
has been discussed below in the above mentioned topics.}
\end{frame}

\begin{frame}{1.    Operational Feasibility}
\\{Feasibility of the working of the system after the installation in the organization as mentioned
in the feasibility analysis and the algorithms which are used for analysis. }
\end{frame}


\begin{frame}{2. Technical Feasibility}
\\{Technical feasibility of sentimental analysis depend upon the algorithms and the approach which are used.The open source platforms and API is easily available . The project normally related to technical feasibility includes the resources availability of the Organization where the project is to be developed and implemented. The limited
resources and open source tools are required for this project hence this project is considered feasible for development.}
\end{frame}



\begin{frame}{3.    Economic Feasibility}
\\{An evaluation of development is done on the open source platforms. There was no need of
extra hardware and software for development of this project. Hence this project has
economically justified for development in this organization.

}
\end{frame}


\begin{frame}{4.    Motivational Feasibility}
\\{An evaluation of the probability that the organization is sufficient motivation to support the
development and implementation of the application with necessary user participation,
resources, training etc. And to avoid fake thumbnail videos.such that the user get the right videos
.}
\end{frame}


\begin{frame}{5.    Schedule Feasibility}
\\{Lot of time is required for analyzing algorithm and developing the project. The time schedule required for the development of this project is very important, since more development time goes on learning of the algorithm ,since more learning time effects development time}
\end{frame}


\begin{frame}{Scope}
\\{Based upon positive and negative reviews .we can suggest the videos whose contents are good.we can use these review analysis in searching of the videos.}
\end{frame}





\begin{frame}{Functional Requirement}
\\{1)R studio tool should import and load all the packages.\newline
2) YouTube API should extract the comments\newline
3) Dictionary meaning should match to the comments and assigning of the polarity should done properly.\newline}
\end{frame}

\begin{frame}{Conclusion}
\\{By Analysis extracted data we have seen the expected and surprising result.Comments are ended with both positive and negative comments.Based upon the analysis we are able to give reviews}
\end{frame}



\begin{frame}{Thanking you.}

{THANK YOU....}

\end{frame}
\end{document}