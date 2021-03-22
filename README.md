## myanimelist-cli
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-1-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

myanimelist-cli is a minimalistic command line interface for fetching user anime data from [MyAnimeList](https://myanimelist.net/)

[![C/C++ CI](https://github.com/jmakhack/mya/actions/workflows/c-cpp.yml/badge.svg?branch=master)](https://github.com/jmakhack/mya/actions/workflows/c-cpp.yml)
[![CodeQL](https://github.com/jmakhack/mya/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/jmakhack/mya/actions/workflows/codeql-analysis.yml)


Usage
-----
```
$ mya --help
Usage: mya [OPTION...] [USERNAME]
Simple command line tool for fetching user anime data from MyAnimeList.

  -a, --all                  Fetch all anime for a user
  -c, --completed            Fetch a user's completed anime
  -d, --dropped              Fetch a user's dropped anime
  -h, --onhold               Fetch a user's on hold anime
  -p, --plantowatch          Fetch a user's plan to watch anime
  -w, --watching             Fetch a user's currently watching anime
  -?, --help                 Give this help list
      --usage                Give a short usage message
  -V, --version              Print program version

Report bugs to <jmakhack@protonmail.com>.
```

Example
-----
```
$ mya -w jmak
watching 4 anime
1. Commit on Titan
2. JoJo's Bizarre Pull Request
3. My Neighbor Octocat
4. One Push Man
```

## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tr>
    <td align="center"><a href="https://github.com/jmakhack"><img src="https://avatars.githubusercontent.com/u/1442227?v=4?s=100" width="100px;" alt=""/><br /><sub><b>jmakhack</b></sub></a><br /><a href="https://github.com/jmakhack/myanimelist-cli/commits?author=jmakhack" title="Code">💻</a> <a href="#maintenance-jmakhack" title="Maintenance">🚧</a></td>
  </tr>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://github.com/all-contributors/all-contributors) specification. Contributions of any kind welcome!